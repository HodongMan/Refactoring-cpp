#pragma once

#include <string>

class Movie;

class Rental
{
public:
	Rental( Movie* movie, int daysRented );
	~Rental( void );

	int				getDaysRented( void ) const noexcept;
	const Movie*	getMovie( void ) const noexcept;

private:
	Movie*	m_Movie;
	int		m_DaysRented;
};