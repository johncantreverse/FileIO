std::vector<byte> read_file( const std::string& path )
{
	std::ifstream stream{ path, std::ios::binary };
	return { std::istreambuf_iterator<char>{ stream }, {} };
}

void write_file( const std::string& path, const std::vector<byte>& data )
{
	std::ofstream stream{ path, std::ios_base::out | std::ios_base::binary };
	stream.write( (const char*) data.data(), data.size() );
}
