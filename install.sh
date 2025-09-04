echo "This will compile and install into /bin/ (if it exists)"
read -p "Do you want to continue? (y/N)" confirm

if [[ "$confirm" == "y" || "$confirm" == "Y" ]]; then
	continue
else
	echo "Understood"
	exit 0
fi

# compiling and installation
sh compile.sh
sudo mv ./timec /bin

echo "Installation complete"
exit 0
