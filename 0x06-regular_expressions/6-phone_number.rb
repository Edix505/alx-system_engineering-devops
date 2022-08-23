#!/usr/bin/env ruby
puts ARGV[0].scan(/\a[0-9]{10}\z/).join
