
eval(File.read("setting.h")
  .gsub(/int/,"")
  .gsub(/char/,"")
  .gsub(/NULL/,"")
  .gsub(/ARGV/,"ARGV_")
  .gsub(/[*\[\]]/,"")
  .gsub(/{/,"[")
  .gsub(/}/,"]")
    )

