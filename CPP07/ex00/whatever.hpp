#pragma once

template< typename Sw >

const Sw &max(const Sw &x ,const Sw &y)
{
	return (x >= y ? x : y);
}

template< typename Mi >

const Mi &min(const Mi &x ,const Mi &y)
{
	return (x <= y ? x : y);
}

template< typename Ma >

void swap(Ma &x, Ma &y)
{
	Ma temp = x;
	x = y;
	y = temp;
}