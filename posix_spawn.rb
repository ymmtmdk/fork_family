require 'posix/spawn'

200.times do
  pid  = POSIX::Spawn::spawn("echo", "abc def");
  sstat = Process::waitpid(pid)
end
