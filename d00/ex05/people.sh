ldapsearch -LLL -Q "uid=z*" \ objectClass = "cn" | sort -f -r | grep cn | cut -c5-
