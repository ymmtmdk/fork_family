SRCS = FileList["*.c"]
BINS = SRCS.ext('')

SRCS.each do |src|
  bin = src.ext('')
  file bin => [src, "config.h"] do
    sh "gcc -O3 -o #{bin} #{src}"
  end
end

task :time => BINS do
  (BINS + ["system.rb", "posix_spawn.rb"]).each do |bin|
    sh "time ./#{bin} > /dev/null"
  end
end

task :default => BINS
