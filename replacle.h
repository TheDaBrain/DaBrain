# Replace in all files (case-sensitive, three variants)
find . -type f -exec sed -i \
  -e 's/STrongDocker/DaBrain/g' \
  -e 's/StrongDocker/DaBrain/g' \
  -e 's/Strong D0cker/DaBrain/g' {} +

# Zip again
cd ..
zip -r mastercoder_modified.zip mastercoder.github.io/
