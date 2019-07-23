#include "Rental.h"

Rental::Rental( Movie* movie, int daysRented )
	: m_Movie{ movie }
	, m_DaysRented{ daysRented }
{
	_ASSERT_EXPR( nullptr != movie, "moive value is nullptr" );
	_ASSERT_EXPR( 0 < daysRented, "daysRented value is invalid" );
}

Rental::~Rental( void )
{
	
}

int Rental::getDaysRented( void ) const noexcept
{
	_ASSERT_EXPR( 0 < m_DaysRented, "daysRented value is invalid" );

	return m_DaysRented;
}

const Movie* Rental::getMovie( void ) const noexcept
{
	_ASSERT_EXPR( nullptr != m_Movie, "moive value is nullptr" );

	return m_Movie;
}