find . -type f -name '*fyre*' | while read FILE ; do
    newfile="$(echo ${FILE} |sed -e 's/fyre/fyre/')" ;
    mv "${FILE}" "${newfile}" ;
done
