#pragma once

#include <string>

class Movie
{
public:
	Movie( std::string title, int priceCode );
	~Movie( void );

	int						getPriceCode( void ) const noexcept;
	void					setPriceCode( const int priceCode ) noexcept;
	const std::string&		getTitle( void ) const noexcept;

private:
	std::string m_Title;
	int			m_PriceCode;
};