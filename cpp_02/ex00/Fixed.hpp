/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/01/17 20:00:57 by dvan-kle      #+#    #+#                 */
/*   Updated: 2024/02/22 15:39:30 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					_fixed_point_value;
		static const int	_fractional_bits = 8;
	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed &operator=(Fixed const &rhs);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
}

#endif