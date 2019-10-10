#include <iostream>
#include <vector>


	
	class Tile{
		
		int northBinding, southBinding, eastBinding, westBinding;
		std::string northGlue, southGlue, eastGlue, westGlue;
				

		public:
			
			Tile(){
					northBinding = 0;
					southBinding = 0;
					eastBinding = 0;
					westBinding = 0;
					northGlue = "";
					southGlue = "";
					eastGlue = "";
					westGlue = "";
			  			
			}

			Tile(int northBinding, int southBinding, int eastBinding, int westBinding, std::string northGlue, std::string southGlue, std::string eastGlue, std::string westGlue){
				this->northBinding = northBinding;
				this->southBinding = southBinding;
				this->eastBinding = southBinding;
				this->westBinding = westBinding;
				this->northGlue = northGlue;
				this->southGlue = southGlue;
				this->eastGlue = eastGlue;
				this->westGlue = westGlue;

			}

			void setNorthBinding(int n){
				this->northBinding = n;
			}

			void setSouthBinding(int s){
				this->southBinding = s;
			}

			void setEastBinding(int e){
				this->eastBinding = e;
			}

			void setWestBinding(int w){
				this->westBinding = w;
			}

			int getNorthBinding(){
				return this->northBinding;
			}

			int getSouthBinding(){
				return this->southBinding;
			}

			int getEastBinding(){
				return this->eastBinding;
			}

			int getWestBinding(){
				return this->westBinding;
			}

			void setNorthGlueType(std::string n){
				this->northGlue = n;
			}

			void setSouthGlueType(std::string s){
				this->southGlue = s;
			}

			void setEastGlueType(std::string e){
				this->eastGlue = e;
			}

			void setWestGlueType(std::string w){
				this->westGlue;
			}

			void printTile(){
				std::cout << "North Side: " << northBinding << northGlue << std::endl;
				std::cout << "East Side: " << eastBinding << eastGlue << std::endl;
				std::cout << "South Side: " << southBinding << southGlue << std::endl;
				std::cout << "West Side: " << westBinding << westGlue << std::endl;
			}

	};//end of class Tile


	class TileAssembly{

		std::vector<Tile> tiles;

		public:

			TileAssembly();

			void addTile(Tile t){
				tiles.push_back(t);
			}

			int getTotalTiles(){
				return tiles.size();
			}
	};//end of class TileAssembly

