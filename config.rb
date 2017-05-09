
eval(File.read("config.h")
  .gsub(/int/,"")
  .gsub(/char/,"")
  .gsub(/NULL/,"")
  .gsub(/ARGV/,"ARGV_")
  .gsub(/[*\[\]]/,"")
  .gsub(/{/,"[")
  .gsub(/}/,"]")
    )

