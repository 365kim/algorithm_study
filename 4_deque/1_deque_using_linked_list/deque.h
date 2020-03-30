/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 16:46:41 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/30 16:48:20 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQUE_H
# define DEQUE_H

typedef struct		s_node
{
	void			*data;
	struct s_node	*prev;
	struct s_node	*next;
}					t_node;

typedef struct		s_deque
{
	unsigned int	size;
	t_node			*front;
	t_node			*back;
}					t_deque;

#endif
