#! /usr/bin/env ruby

require_relative 'setting.rb'

COUNT.times do
  system(BIN, *ARGV_.drop(1))
end
