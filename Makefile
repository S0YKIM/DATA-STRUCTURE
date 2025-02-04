NAME = data_structure

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

FILES = main \
	   1.array \
	   1.linked_list \
	   2.circular_linked_list \
	   2.double_linked_list \
	   3.stack_array \
	   3.stack_linked_list \
	   4.stack_maze \
	   5.circular_queue \
	   5.deque \
	   5.queue_array \
	   6.queue_linked_list \
	   6.queue_simulation \
	   7.avl_tree \
	   7.binary_tree_traversal \
	   7.binary_search_tree \
	   7.binary_tree_queue \
	   8.maxheap \
	   8.minheap \
	   9.array_graph \
	   9.linked_list_graph \
	   9.graph_traversal \
	   10.dijkstra \
	   10.floyd \
	   10.kruskal \
	   10.minimum_spanning_tree \
	   10.prim \
	   11.sort \
	   12.search

FILES_TEST = test_linked_list \
			test_circular_list \
			test_double_list \
			test_polynomial \
			test_stack \
			test_stack_maze \
			test_queue_stack \
			test_deque \
			test_queue_simulation \
			test_binary_tree \
			test_avl_tree \
			test_max_heap \
			test_min_heap \
			test_array_graph \
			test_linked_graph \
			test_graph_traversal \
			test_algorithm \
			test_sort

SRCS_DIR = srcs/
SRCS_TEST_DIR = test/
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_TEST = $(addprefix $(SRCS_TEST_DIR), $(addsuffix .c, $(FILES_TEST)))

OBJS_DIR = srcs/
OBJS_TEST_DIR = test/
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_TEST = $(addprefix $(OBJS_TEST_DIR), $(addsuffix .o, $(FILES_TEST)))

INC_FLAGS = -I includes

RM = rm -f

.c.o: $(SRCS) $(SRCS_TEST)
	$(CC) $(CFLAGS) -c $< -o $@ $(INC_FLAGS)

all : $(NAME)

$(NAME) : $(OBJS) $(OBJS_TEST)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJS) $(OBJS_TEST)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re