#include "Movie.h"


Movie::Movie( std::string title, int priceCode )
	: m_Title{ title }
	, m_PriceCode{ priceCode }
{

}

Movie::~Movie( void )
{

}

int Movie::getPriceCode( void ) const noexcept
{
	_ASSERT_EXPR( 0 <= m_PriceCode, "m_PriceCode value is invalid" );

	return m_PriceCode;
}

void Movie::setPriceCode( const int priceCode ) noexcept
{
	_ASSERT_EXPR( 0 <= priceCode, "priceCode value is invalid" );

	m_PriceCode = priceCode;
}

const std::string& Movie::getTitle( void ) const noexcept
{
	_ASSERT_EXPR( false == m_Title.empty(), "m_Title value is invalid" );
	
	return m_Title;
}
