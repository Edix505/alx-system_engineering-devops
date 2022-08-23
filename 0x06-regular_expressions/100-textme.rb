#!/usr/bin/env ruby
puts ARGV[0].scan(/\[frm:(.*?)\]\s\[to:(.*?)\]\s\[flag:(.*?)\]/).join(',')
