require 'posix/spawn'
require_relative 'config.rb'

COUNT.times do
  system(BIN, *ARGV_.drop(1))
end