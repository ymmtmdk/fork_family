#! /usr/bin/env ruby

require 'posix/spawn'
require_relative 'setting.rb'

COUNT.times do
  pid  = POSIX::Spawn::spawn(BIN, *ARGV_.drop(1))
  sstat = Process::waitpid(pid)
end
