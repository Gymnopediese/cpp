/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:03:10 by albaud            #+#    #+#             */
/*   Updated: 2022/11/14 23:19:19 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

template<typename S>
void swap(S & a, S & b);

template<typename MIN>
MIN const & min(MIN const & a, MIN const & b);

template<typename MAX>
MAX const & max(MAX const & a, MAX const & b);
#endif