CC = "gcc"

SRCS = FileList["*.c"]
BINS = SRCS.ext('')

SRCS.each do |src|
  bin = src.ext('')
  file bin => src do
    sh "gcc -O3 -o #{bin} #{src}"
  end
end

task :default => BINS
task :time => BINS do
end
