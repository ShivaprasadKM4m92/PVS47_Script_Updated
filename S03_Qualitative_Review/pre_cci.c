# 1 "c:\\users\\shiva prasad km\\documents\\github\\pvs47_scripts\\newscripts\\s03_qualitative_review\\\\combined_S03_Qualitative_Review.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\users\\shiva prasad km\\documents\\github\\pvs47_scripts\\newscripts\\s03_qualitative_review\\\\combined_S03_Qualitative_Review.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\users\\shiva prasad km\\documents\\github\\pvs47_scripts\\newscripts\\s03_qualitative_review\\\\combined_S03_Qualitative_Review.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "c:\\users\\shiva prasad km\\documents\\github\\pvs47_scripts\\newscripts\\s03_qualitative_review\\\\combined_S03_Qualitative_Review.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\shiva prasad km\\documents\\github\\pvs47_scripts\\newscripts\\s03_qualitative_review\\\\combined_S03_Qualitative_Review.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	lr_start_transaction("S03_01_OpenApplication");
	
	web_add_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	
	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

	

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

 
	web_reg_save_param_attrib(
		"ParamName=Csfr_TokenId",
		"TagName=input",
		"Extract=value",
		"Name=_csrf",
		"Type=hidden",
		"SEARCH_FILTERS",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/auth*",
		"LAST");

	web_reg_find("Search=Body",
		"Text=Login",
		"LAST");

	web_url("signal", 
		"URL={URL}/signal", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("login-23162286b278bf1e48cb0201c9e9a644.css", 
		"URL={URL}/signal/assets/login-23162286b278bf1e48cb0201c9e9a644.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t3.inf", 
		"LAST");

	 

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	

	(web_remove_auto_header("Accept-Language", "ImplicitGen=Yes", "LAST"));

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_header("If-None-Match", 
		"6e5406c103ef7317b32f3e6f0091183fcb5ac377");

	

	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"*/*");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"URL={URL}/signal/assets/application-b6b2fa3a918957eb49ac1c12c36b30ec.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t6.inf", 
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_url("application-20282e3e3fad9c329f1728b037973a74.css", 
		"URL={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/login/auth", 
		"Snapshot=t7.inf", 
		"LAST");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate, br");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	

	web_add_header("Origin", 
		"{URL}");

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(0);

	web_url("OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2", 
		"URL={URL}/signal/assets/OpenSans-Regular-55835483c304eaa8477fea2c36abba17.woff2?v=1.1.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t10.inf", 
		"LAST");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	
	web_concurrent_end(0);

	web_add_auto_header("User-Agent", 
		"Chrome WIN 81.0.4044.138 (8c6c7ba89cc9453625af54f11fd83179e23450fa-refs/branch-heads/4044@{#999}) channel(stable)");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Content-Encoding", 
		"gzip");

	web_add_header("Pragma", 
		"no-cache");

	web_add_header("X-Client-Data", 
		"CIi2yQEIo7bJAQjEtskBCKmdygEI0K/KAQi8sMoBCO21ygEIjrrKARi9usoBGJu+ygE=");


	

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/81.0.4044.138 Safari/537.36");

	

	
	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-81.0.4044.138");

	web_add_auto_header("X-Goog-Update-Interactivity", 
		"bg");



	
	lr_end_transaction("S03_01_OpenApplication",2);

	lr_think_time(3);
 
 
 
 
 
 
 
 
 


	lr_start_transaction("S03_02_Login");
 
 



	(web_remove_auto_header("Sec-Fetch-Dest", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Origin", 
		"{URL}");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Welcome",
		"LAST");

	web_submit_data("authenticate",
		"Action={URL}/signal/login/authenticate",
		"Method=POST",
		"RecContentType=text/html",
		"Referer={URL}/signal/login/auth",
		"Snapshot=t20.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=_csrf", "Value={Csfr_TokenId}", "ENDITEM",
		"Name=username", "Value={UserName}", "ENDITEM",
		"Name=password", "Value={Password}", "ENDITEM",
		"LAST");

	web_add_header("Accept", 
		"text/css,*/*;q=0.1");

	web_concurrent_start(0);

	web_url("theme_gradient_blue-82b8663def72c9ceff32d61e0b4a5253.css", 
		"URL={URL}/signal/assets/theme_gradient_blue-82b8663def72c9ceff32d61e0b4a5253.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t21.inf", 
		"LAST");

 
 

	web_url("pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"URL={URL}/signal/assets/app/pvs/pvs_app_css-794a4a77a2a4bcc45fa913cd043a5ab3.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t22.inf", 
		"LAST");

 
 
 
	web_url("pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"URL={URL}/signal/assets/app/pvs/pvs_508c-fd4a301235dfeff417d96bed64e8429d.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t23.inf", 
		"LAST");
 
 
 

	web_url("gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"URL={URL}/signal/assets/vendorUi/gridstack.min-82a5fabd01f65ac4b5e87078091be104.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t24.inf", 
		"LAST");

 
 

	web_url("modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"URL={URL}/signal/assets/vendorUi/modernizr.min-23fa28ce275880746945a2305077eebc.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t25.inf", 
		"LAST");
 
 
 

	web_url("materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"URL={URL}/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t26.inf", 
		"LAST");

 
 

	web_url("dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"URL={URL}/signal/assets/dashboard-7d6d721454def651262f344c8062d5e4.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t27.inf", 
		"LAST");
 
 
 

	web_url("bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"URL={URL}/signal/assets/app/pvs/bootstrap-datetimepicker-c0f52e788c9b52855aeb720838b56db9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t28.inf", 
		"LAST");
 
 
 

	web_url("fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.min-537e31219634a1a50bfc6c265c08a05f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t29.inf", 
		"LAST");

 
 

	web_url("workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"URL={URL}/signal/assets/workflowModal-8863a855e0d38b1c16a0b929c87a1eb2.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t30.inf", 
		"LAST");
 
 
 

	web_url("jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery-2.2.4-986b7af813adeaf9e589ef20bcc97bb0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t31.inf", 
		"LAST");

 
 

	web_url("jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"URL={URL}/signal/assets/vendorUi/jquery.i18n-61406922e05804e4abe8c8360ec862fa.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t32.inf", 
		"LAST");

 
 

	web_url("moment-434aaa1704890766125108c94efbb50c.js", 
		"URL={URL}/signal/assets/vendorUi/moment/moment-434aaa1704890766125108c94efbb50c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t33.inf", 
		"LAST");

 
 

	web_url("underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"URL={URL}/signal/assets/vendorUi/underscore/underscore.min-e6d41cd714673035a7f8a65c30f3dcb1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t34.inf", 
		"LAST");

 
 
 
	web_url("bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrap/bootstrap.min-3f6aa77f4768de267c35a96028599ce3.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t35.inf", 
		"LAST");

 
 

	web_url("jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"URL={URL}/signal/assets/vendorUi/jquery-ui/jquery-ui.min-b0582f2d27fdc676c34681e0c96aac0c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t36.inf", 
		"LAST");

 
 

	web_url("popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"URL={URL}/signal/assets/vendorUi/popover/popover.min-a48d28e289c6932042ffa0ab05e7bf68.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t37.inf", 
		"LAST");
 
 
 

	web_url("momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"URL={URL}/signal/assets/vendorUi/moment/momentlocales-bd0407faadf015b0c0b0d49b831aeb7b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t38.inf", 
		"LAST");
 
 
 

	web_url("momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"URL={URL}/signal/assets/vendorUi/moment/momentTimezones-with-data-c15ec3e27a3263556fdbb96b61f9206f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t39.inf", 
		"LAST");
 
 
 

	web_url("jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"URL={URL}/signal/assets/datatables/jquery.dataTables_custom-8dad82f79087bc7c28eeb9b403e756b8.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t40.inf", 
		"LAST");

 
 

	web_url("select2-911832dffdffb9e7bafb38412a68f445.js", 
		"URL={URL}/signal/assets/vendorUi/select2/select2-911832dffdffb9e7bafb38412a68f445.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t41.inf", 
		"LAST");

 
 

	web_url("dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.bootstrap-93e0b2f3576484b422f6e4a29b3e6037.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t42.inf", 
		"LAST");
 
 
 

	web_url("fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"URL={URL}/signal/assets/vendorUi/fuelux/fuelux.min-d30fb133a2493fadc38faabf3f226bc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t43.inf", 
		"LAST");
 
 
 

	web_url("dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.bootstrapPagination-d133da3f3570036f8532207affa78bd9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t44.inf", 
		"LAST");

 
 

	web_url("datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/datetime-moment-3fa3fc8eaf60abe3fae2bae2fb4328b0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t45.inf", 
		"LAST");

 
 

	web_url("spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"URL={URL}/signal/assets/vendorUi/spinner/spinner.min-6f6eab72fd2531bea7514cc0d9830665.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t46.inf", 
		"LAST");
 
 
 

	web_url("jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"URL={URL}/signal/assets/vendorUi/multiselect/jquery.multi-select2.0-c2649a518d094dac8d3e66aaba1e4501.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t47.inf", 
		"LAST");

 
 

	web_url("dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/dataTables.fixedColumns.min-acc90a700b69150380759567188a8cd0.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t48.inf", 
		"LAST");
 
 
 

	web_url("wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"URL={URL}/signal/assets/vendorUi/wow/wow.min-237e66d720861f3cc99ee444887b7c32.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t49.inf", 
		"LAST");

 
 

	web_url("fastclick-c74606809464116f3413064b0e200023.js", 
		"URL={URL}/signal/assets/vendorUi/mobile/fastclick-c74606809464116f3413064b0e200023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t50.inf", 
		"LAST");

 
 
 
	web_url("detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"URL={URL}/signal/assets/vendorUi/mobile/detect-fd56173b9f1574612026ca4bd0f9ce20.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t51.inf", 
		"LAST");
 
 
 

	web_url("jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.nicescroll-09e3ca9889499cfb15271ad8dc51f842.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t52.inf", 
		"LAST");
 
 
 

	web_url("jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.scrollTo.min-240b8d54661c5e0500b96b9594d60b62.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t53.inf", 
		"LAST");
 
 
 

	web_url("jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.slimscroll-6a314b5f0344bf7ef8e1e0c948bb75f9.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t54.inf", 
		"LAST");

 
 

	web_url("jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"URL={URL}/signal/assets/vendorUi/jquery/jquery.blockUI-7aa9ac8e34d97a945dbf467d99fda834.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t55.inf", 
		"LAST");

 
 

	web_url("notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"URL={URL}/signal/assets/vendorUi/notifyjs/dist/notify.min-1dba61fec15a5d71814b2c2cb69f65bf.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t56.inf", 
		"LAST");
 
 
 

	web_url("notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"URL={URL}/signal/assets/vendorUi/notifications/notify-metro-9a1cf25a956b601aedd486c779986df7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t57.inf", 
		"LAST");
 
 
 

	web_url("rx-notify-db0528274130516c271389cccac65e17.js", 
		"URL={URL}/signal/assets/vendorUi/sweet-alert/rx-notify-db0528274130516c271389cccac65e17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t58.inf", 
		"LAST");
 
 
 

	web_url("bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrapUploader/bootstrap-uploader-265e387a3ec58973abdfae04a79862b2.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t59.inf", 
		"LAST");
 
 
 

	web_url("jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"URL={URL}/signal/assets/vendorUi/waypoints/lib/jquery.waypoints.min-4471999ef1b83a94d41d3cebb887c349.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t60.inf", 
		"LAST");

 
 

	web_url("sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"URL={URL}/signal/assets/vendorUi/sweet-alert/sweet-alert.min-792598f1e6bac9b4f7cc6f060ae6b454.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t61.inf", 
		"LAST");
 
 
 

	web_url("jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"URL={URL}/signal/assets/vendorUi/counterup/jquery.counterup.min-86f52f47d4c325261bf7d36b09dcf216.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t62.inf", 
		"LAST");

 
 
 
	web_url("handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"URL={URL}/signal/assets/vendorUi/handlebar/handlebars-v4.0.5-8ad4263f81c714ada4985affb687f12b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t63.inf", 
		"LAST");
 
 
 

	web_url("jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"URL={URL}/signal/assets/vendorUi/jquery.ba-throttle-debounce-876f6988f0a240fd9c49f09c5d71b994.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t64.inf", 
		"LAST");
 
 
 

	web_url("bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"URL={URL}/signal/assets/vendorUi/bootstrap-switch/bootstrap-switch-732d14990dba7f4fff6b5b441177c905.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t65.inf", 
		"LAST");

 
 

	web_url("jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"URL={URL}/signal/assets/common/jquery.core-2f63ea2ce21973031b9685e36eba0731.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t66.inf", 
		"LAST");
 
 
 

	web_url("webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"URL={URL}/signal/assets/vendorUi/bower_components/webcomponentsjs/webcomponents-lite-c806470ac3182eedbb9de677fde922de.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t67.inf", 
		"LAST");
 
 
 

	web_url("bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"URL={URL}/signal/assets/bootstrap-multiselect/bootstrap-multiselect-7b500966794478e2792eea0659e0aa96.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t68.inf", 
		"LAST");
 
 
 

	web_url("dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"URL={URL}/signal/assets/vendorUi/datatable/dataTables.buttons.min-99ef2a29fc5b51a6f8f392977c2e34b1.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t69.inf", 
		"LAST");
 
 
 

	web_url("buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"URL={URL}/signal/assets/datatables/buttons.bootstrap-acac51d5cf162bd14f44ad66a6f275f5.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t70.inf", 
		"LAST");
 
 
 

	web_url("waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"URL={URL}/signal/assets/vendorUi/waves/waves-2d20efe8b7228bbc963944ac22c9667c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t71.inf", 
		"LAST");
 
 
 

	web_url("rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"URL={URL}/signal/assets/app/pvs/rxTitleOptions-1279146f661735d9e94cde274342b25c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t72.inf", 
		"LAST");
 
 
 

	web_url("menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"URL={URL}/signal/assets/app/pvs/menu-e9f9c79de11e89cfb0d2f7ae1cd80554.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t73.inf", 
		"LAST");
 
 
 

	web_url("pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"URL={URL}/signal/assets/app/pvs/pvs_app_widget-ec77f7e909db8bab59e572285b1c3389.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t74.inf", 
		"LAST");
 
 
 

	web_url("userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"URL={URL}/signal/assets/app/pvs/userGroupSelect-7f7d244cad34902e9681267c696c1bed.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t75.inf", 
		"LAST");
 
 
 

	web_url("actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"URL={URL}/signal/assets/app/pvs/actions/actions-c6db5fb63baee4c159b9e783821b2058.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t76.inf", 
		"LAST");
 
 
 

 
 
 
 
 
 
 
 
 
 

	web_url("no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"URL={URL}/signal/assets/vendorUi/highcharts/modules/no-data-to-display-fc44762af3aab44deb8317659be156a6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t78.inf", 
		"LAST");

 
 

	web_url("dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"URL={URL}/signal/assets/app/pvs/dashboard/dashboardWidget-24248f37a4de46fe75c68afd1bc9dca6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t79.inf", 
		"LAST");
 
 
 

	web_url("fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.min-eadac4139211e13292deb9473e638d45.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t80.inf", 
		"LAST");
 
 
 

	web_url("dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"URL={URL}/signal/assets/app/pvs/dashboard/dashboard-1b86cbebab89d1a42ae9eebe0fa883ad.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t81.inf", 
		"LAST");
 
 
 

	web_url("gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"URL={URL}/signal/assets/vendorUi/gridstack/gridstack.jQueryUI.min-4850183e36adcd62a4e2c741ae857fc4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t82.inf", 
		"LAST");
 
 
 

	web_url("pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"URL={URL}/signal/assets/app/pvs/pushNotification-308cfd70b62333c52f5193fb7eaaafe6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t83.inf", 
		"LAST");
 
 
 

	web_url("gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"URL={URL}/signal/assets/vendorUi/gridstack/gridstack.min-8243969940fd3f8d9a2116948054084f.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t84.inf", 
		"LAST");
 
 
 

	web_url("bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"URL={URL}/signal/assets/app/pvs/date-time/bootstrap-datetimepicker-5aa81b54c1dd973165b56d66567b57d6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t85.inf", 
		"LAST");
 
 
 

	web_url("calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"URL={URL}/signal/assets/app/pvs/calendar-4d078ca93abd6a53a6f9c1bf8f79cd54.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t87.inf", 
		"LAST");
 
 
 

	web_url("rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"URL={URL}/signal/assets/app/pvs/common/rx_common-3bec52fd16a226d99e60fd80372c8c05.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t88.inf", 
		"LAST");
 
 
 

	web_url("jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"URL={URL}/signal/assets/app/jquery.app-9af4130ef9d8c98c078b99d2cddad130.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t89.inf", 
		"LAST");
 
 
 

	web_url("jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"URL={URL}/signal/assets/app/jquery.core-9088768891f7d43af5ab8c8d642e5301.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/", 
		"Snapshot=t90.inf", 
		"LAST");

 
 
 
 
 
 
 

	web_url("date_picker_template.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/date_picker_template.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t86.inf", 
		"LAST");
 
 
 
 
 
 

	web_url("en.json", 
		"URL={URL}/signal/assets/i18n/en.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t91.inf", 
		"Mode=HTTP", 
		"LAST");
 
 
 

	web_url("fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"URL={URL}/signal/assets/vendorUi/fullcalendar.print-b8f18e9775afba153b4abfbc5f9baaf6.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/", 
		"Snapshot=t92.inf", 
		"LAST");
 
 
 
 
 
 
 
 

	web_url("dashboard_widget.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/dashboard_widget.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/", 
		"Snapshot=t93.inf", 
		"LAST");
 
 
 
 
 
 

	web_url("glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"URL={URL}/signal/assets/glyphicons-halflings-regular-448c34a56d699c29117adc64c43affeb.woff2", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t94.inf", 
		"LAST");
 
 
 
 
 
 

	web_url("Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff", 
		"URL={URL}/signal/assets/Material-Design-Iconic-Font-a2a1ba89e7f9d29f7d5aee76e8b9f7ab.woff?v=1.0.1", 
		"Resource=1", 
		"RecContentType=font/woff", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t95.inf", 
		"LAST");
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
	web_url("caseByStatus", 
		"URL={URL}/signal/dashboard/caseByStatus?_=1590390412870", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t97.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("sideBar", 
		"URL={URL}/signal/dashboard/sideBar?_=1590390412869", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("ahaByStatus", 
		"URL={URL}/signal/dashboard/ahaByStatus?_=1590390412872", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t99.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("alertByDueDate", 
		"URL={URL}/signal/dashboard/alertByDueDate?_=1590390412873", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t100.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("aggAlertByStatus", 
		"URL={URL}/signal/dashboard/aggAlertByStatus?_=1590390412871", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t101.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("getProductByStatus", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Aggregate%20Case%20Alert&_=1590390412875", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t102.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("getProductByStatus_2", 
		"URL={URL}/signal/dashboard/getProductByStatus?type=Single%20Case%20Alert&_=1590390412874", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t103.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 

	 
	
 
 
 
 
 

	web_add_header("X-CSRF-TOKEN",
		"{Csfr_TokenId}");

	web_submit_data("events", 
		"Action={URL}/signal/calendar/events", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t105.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=start", "Value=27-Apr-2020", "ENDITEM", 
		"Name=end", "Value=08-Jun-2020", "ENDITEM", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("info", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t107.inf", 
		"Mode=HTTP", 
		"LAST");
 
 
 
 
 
 

	web_url("alertList", 
		"URL={URL}/signal/dashboard/alertList?_=1590390412877", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t108.inf", 
		"Mode=HTTP", 
		"LAST");
 
 
 

 

	web_url("fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2", 
		"URL={URL}/signal/assets/fontawesome-webfont-af7ae505a9eed503f8b8e6982036873e.woff2?v=4.7.0", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/application-20282e3e3fad9c329f1728b037973a74.css", 
		"Snapshot=t109.inf", 
		"LAST");

 
 

	web_url("materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2", 
		"URL={URL}/signal/assets/mdi-fonts/fonts/materialdesignicons-webfont-d1bdfb3838e2f78edf1ede85f56eabc9.woff2?v=3.2.89", 
		"Resource=1", 
		"RecContentType=font/woff2", 
		"Referer={URL}/signal/assets/mdi-fonts/css/materialdesignicons-2f254cfdb2b23bcf596ab766574b3675.css", 
		"Snapshot=t110.inf", 
		"LAST");

	web_url("signalList", 
		"URL={URL}/signal/dashboard/signalList?_=1590390412878", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t111.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	web_url("actionList", 
		"URL={URL}/signal/dashboard/actionList?_=1590390412879", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/", 
		"Snapshot=t114.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 

	web_concurrent_end(0);

 

	lr_end_transaction("S03_02_Login",2);

	lr_think_time(3);

	lr_start_transaction("S03_03_NavigateTriggeredAlertsQualitativeReview");

	web_add_header("X-CSRF-TOKEN",
		"{Csfr_TokenId}");

	web_submit_data("saveDashboardConfig", 
		"Action={URL}/signal/dashboard/saveDashboardConfig", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t118.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=dashboardWidgetsConfig", "Value={\"pvWidgetChart-11\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-11\",\"x\":0,\"y\":7,\"height\":6,\"width\":12},\"content\":{\"id\":\"listAction\",\"type\":\"pvDashReports\"},\"reportWidgetName\":\"Top 50 Actions\"},\"pvWidgetChart-9\":{\"reportWidgetName\":\"Qualitative Products By Status\",\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-9\",\"x\":0,\"y\":37,\"width\":6,\"height\":7},\"content\":{\"id\":\"qualitative-products-status\","
		"\"type\":\"pvDashChart\"},\"visible\":false},\"pvWidgetChart-10\":{\"reportWidgetName\":\"Quantitative Products By Status\",\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-10\",\"x\":0,\"y\":43,\"width\":6,\"height\":7},\"content\":{\"id\":\"quantitative-products-status\",\"type\":\"pvDashChart\"},\"visible\":false},\"pvWidgetChart-7\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-7\",\"x\":0,\"y\":13,\"height\":6,\"width\":6},\"content\":{\"id\":\"assignedSignalTable\",\"type"
		"\":\"pvDashReports\"},\"reportWidgetName\":\"Assigned Signals\"},\"pvWidgetChart-5\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-5\",\"x\":0,\"y\":0,\"height\":6,\"width\":12},\"content\":{\"id\":\"assignedTriggeredAlerts\",\"type\":\"pvDashReports\"},\"reportWidgetName\":\"Top 50 Alerts\"},\"pvWidgetChart-4\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-4\",\"x\":6,\"y\":13,\"height\":6,\"width\":6},\"content\":{\"id\":\"due-date-chart\",\"type\":\""
		"pvDashChart\"},\"reportWidgetName\":\"Alert By Due Date\"},\"pvWidgetChart-6\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-6\",\"x\":6,\"y\":28,\"height\":8,\"width\":6},\"content\":{\"id\":\"calendar\",\"type\":\"pvDashCalendar\"},\"reportWidgetName\":\"Calendar\"},\"pvWidgetChart-1\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-1\",\"x\":0,\"y\":28,\"height\":8,\"width\":6},\"content\":{\"id\":\"adhoc-chart\",\"type\":\"pvDashChart\"},\""
		"reportWidgetName\":\"Ad-hoc Review By Status\"},\"pvWidgetChart-2\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-2\",\"x\":6,\"y\":21,\"height\":7,\"width\":6},\"content\":{\"id\":\"case-status-chart\",\"type\":\"pvDashChart\"},\"reportWidgetName\":\"Qualitative Review By Status\"},\"pvWidgetChart-3\":{\"visible\":true,\"reportWidgetDetails\":{\"id\":\"pvWidgetChart-3\",\"x\":0,\"y\":21,\"height\":7,\"width\":6},\"content\":{\"id\":\"aggregate-chart\",\"type\":\"pvDashChart\"}"
		",\"reportWidgetName\":\"Quantitative Review By Status\"},\"inbox\":{\"reportWidgetName\":\"Inbox\",\"reportWidgetDetails\":{\"id\":\"inbox\"},\"visible\":true},\"isDirty\":true}", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Qualitative Review",
		"LAST");

	web_url("review", 
		"URL={URL}/signal/singleCaseAlert/review", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		"LAST");

	web_concurrent_start(0);

	web_url("deliveryOption-7f47fbed88efc00747809850e2dc4aa4.js", 
		"URL={URL}/signal/assets/app/pvs/configuration/deliveryOption-7f47fbed88efc00747809850e2dc4aa4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/review", 
		"Snapshot=t120.inf", 
		"LAST");

	web_url("date_sorting-da239e7bd7a3fa5234640fc73de45906.js", 
		"URL={URL}/signal/assets/app/pvs/alerts_review/date_sorting-da239e7bd7a3fa5234640fc73de45906.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/review", 
		"Snapshot=t121.inf", 
		"LAST");

	web_url("dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"URL={URL}/signal/assets/app/pvs/dataTablesActionButtons-50a104b30cb3aa5d21eb1f1f33f1d835.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/review", 
		"Snapshot=t122.inf", 
		"LAST");

	web_url("simple_case_alert_review-00e9c3583729a51ba495c99fa9d8b592.js", 
		"URL={URL}/signal/assets/app/pvs/alerts_review/simple_case_alert_review-00e9c3583729a51ba495c99fa9d8b592.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/review", 
		"Snapshot=t123.inf", 
		"LAST");

	web_url("jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"URL={URL}/signal/assets/yadcf/jquery.dataTables.yadcf-926e48d7fd2745f397358930a160f1e9.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/singleCaseAlert/review", 
		"Snapshot=t124.inf", 
		"LAST");

	web_concurrent_end(0);

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("priorities", 
		"URL={URL}/signal/workflow/priorities", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/review", 
		"Snapshot=t125.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("workflowState", 
		"URL={URL}/signal/workflow/workflowState", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/review", 
		"Snapshot=t126.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("listConfig", 
		"URL={URL}/signal/singleCaseAlert/listConfig?adhocRun=false&draw=1&columns%5B0%5D%5Bdata%5D=name&columns%5B0%5D%5Bname%5D=&columns%5B0%5D%5Bsearchable%5D=true&columns%5B0%5D%5Borderable%5D=true&columns%5B0%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B0%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B1%5D%5Bdata%5D=productSelection&columns%5B1%5D%5Bname%5D=&columns%5B1%5D%5Bsearchable%5D=true&columns%5B1%5D%5Borderable%5D=false&columns%5B1%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B1%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B2%5D%5Bdata%5D=description&columns%5B2%5D%5Bname%5D=&columns%5B2%5D%5Bsearchable%5D=true&columns%5B2%5D%5Borderable%5D=true&columns%5B2%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B2%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B3%5D%5Bdata%5D=&columns%5B3%5D%5Bname%5D=&columns%5B3%5D%5Bsearchable%5D=true&columns%5B3%5D%5Borderable%5D=true&columns%5B3%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B3%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B4%5D%5Bdata%5D=caseCount&"
		"columns%5B4%5D%5Bname%5D=&columns%5B4%5D%5Bsearchable%5D=true&columns%5B4%5D%5Borderable%5D=false&columns%5B4%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B4%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B5%5D%5Bdata%5D=newCases&columns%5B5%5D%5Bname%5D=&columns%5B5%5D%5Bsearchable%5D=true&columns%5B5%5D%5Borderable%5D=false&columns%5B5%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B5%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B6%5D%5Bdata%5D=closedCaseCount&columns%5B6%5D%5Bname%5D=&columns%5B6%5D%5Bsearchable%5D=true&"
		"columns%5B6%5D%5Borderable%5D=false&columns%5B6%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B6%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B7%5D%5Bdata%5D=alertPriority&columns%5B7%5D%5Bname%5D=&columns%5B7%5D%5Bsearchable%5D=true&columns%5B7%5D%5Borderable%5D=false&columns%5B7%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B7%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B8%5D%5Bdata%5D=lastModified&columns%5B8%5D%5Bname%5D=&columns%5B8%5D%5Bsearchable%5D=true&columns%5B8%5D%5Borderable%5D=true&"
		"columns%5B8%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B8%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B9%5D%5Bdata%5D=lastExecuted&columns%5B9%5D%5Bname%5D=&columns%5B9%5D%5Bsearchable%5D=true&columns%5B9%5D%5Borderable%5D=true&columns%5B9%5D%5Bsearch%5D%5Bvalue%5D=&columns%5B9%5D%5Bsearch%5D%5Bregex%5D=false&columns%5B10%5D%5Bdata%5D=&columns%5B10%5D%5Bname%5D=&columns%5B10%5D%5Bsearchable%5D=true&columns%5B10%5D%5Borderable%5D=false&columns%5B10%5D%5Bsearch%5D%5Bvalue%5D=&"
		"columns%5B10%5D%5Bsearch%5D%5Bregex%5D=false&order%5B0%5D%5Bcolumn%5D=9&order%5B0%5D%5Bdir%5D=desc&start=0&length=25&search%5Bvalue%5D=&search%5Bregex%5D=false&_=1590390485286", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/review", 
		"Snapshot=t128.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

 
 
 
 
 
 
 
 

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_url("info_2", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/review", 
		"Snapshot=t130.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

 
 
 
 
 
 
 
 
 
 

	web_add_header("Accept", 
		"*/*");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

 
 
 
 
 
 
 
 

	lr_end_transaction("S03_03_NavigateTriggeredAlertsQualitativeReview",2);

	lr_think_time(3);

	lr_start_transaction("S03_04_ClickOnAlertName");

	web_add_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Case Series",
		"LAST");

	web_url("details", 
		"URL={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/singleCaseAlert/review", 
		"Snapshot=t133.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("Accept", 
		"*/*");

	web_concurrent_start(0);

	web_url("highcharts-3d-65774008a3b78b30a394568a24c6af09.js", 
		"URL={URL}/signal/assets/vendorUi/highcharts/highcharts-3d-65774008a3b78b30a394568a24c6af09.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t134.inf", 
		"LAST");

 
 

	web_url("highcharts-more-f214354c75a376fd86847242d26a1023.js", 
		"URL={URL}/signal/assets/vendorUi/highcharts/highcharts-more-f214354c75a376fd86847242d26a1023.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t135.inf", 
		"LAST");
 
 
 

	web_url("grid-rx-b439bf122addf135d43063a53d34f9d7.js", 
		"URL={URL}/signal/assets/vendorUi/highcharts/themes/grid-rx-b439bf122addf135d43063a53d34f9d7.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t136.inf", 
		"LAST");
 
 
 

	web_url("bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"URL={URL}/signal/assets/app/pvs/bootbox.min-05d23d3920015845ca00414081fd0ec6.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t137.inf", 
		"LAST");
 
 
 

	web_url("highcharts-de65192df8733b7a60482497a875df4c.js", 
		"URL={URL}/signal/assets/vendorUi/highcharts/highcharts-de65192df8733b7a60482497a875df4c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t138.inf", 
		"LAST");

 
 

	web_url("jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"URL={URL}/signal/assets/yadcf/jquery.dataTables.yadcf-a13c93c305588bd0340c6a9901cd3492.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t139.inf", 
		"LAST");
 
 
 

	web_url("query-b27835585fd1b7c5ffd2e2c29a5ff2d7.css", 
		"URL={URL}/signal/assets/query-b27835585fd1b7c5ffd2e2c29a5ff2d7.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t140.inf", 
		"LAST");
 
 
 

	web_url("businessConfiguration-731e96c2d56f6817b3602b4a92b3886f.css", 
		"URL={URL}/signal/assets/app/pvs/businessConfiguration-731e96c2d56f6817b3602b4a92b3886f.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t141.inf", 
		"LAST");

 
 

	web_url("pvs_list-642eea288b57d537ccfdff6c8e0e7c6b.css", 
		"URL={URL}/signal/assets/app/pvs/pvs_list-642eea288b57d537ccfdff6c8e0e7c6b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t142.inf", 
		"LAST");
 
 
 

	web_url("updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"URL={URL}/signal/assets/app/pvs/updatedFixedColumn-4180034da606560f8555366463a750ac.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t143.inf", 
		"LAST");
 
 
 

	web_url("colReorder.dataTables.min-6c9c3520f346057281532b7b491bad4b.css", 
		"URL={URL}/signal/assets/colReorder.dataTables.min-6c9c3520f346057281532b7b491bad4b.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t144.inf", 
		"LAST");
 
 
 

	web_url("caseHistoryTable-1e0741698f7b28dcc84eeaa5e97bc3db.js", 
		"URL={URL}/signal/assets/app/pvs/caseHistory/caseHistoryTable-1e0741698f7b28dcc84eeaa5e97bc3db.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t145.inf", 
		"LAST");
 
 
 

	web_url("datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"URL={URL}/signal/assets/vendorUi/datatables/datatable.colsReorder.min-f60fbf698f1fa675a29d5b361968020a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t146.inf", 
		"LAST");
 
 
 

	web_url("fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"URL={URL}/signal/assets/app/pvs/alerts_review/fieldConfigurationManagement-e1a802ff9b5cad88989e761d50770b53.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t147.inf", 
		"LAST");
 
 
 

	web_url("similarCases-313f82b9b82d3ae5fbaf40bbf9e37f17.js", 
		"URL={URL}/signal/assets/app/pvs/similarCases/similarCases-313f82b9b82d3ae5fbaf40bbf9e37f17.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t148.inf", 
		"LAST");
 
 
 

	web_url("bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"URL={URL}/signal/assets/app/bootstrap-modal-popover/bootstrap-modal-popover-13efefa1c00b94cc73690eb7d64a74c4.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t149.inf", 
		"LAST");
 
 
 

	web_url("single_case_alert_details-50076305d9a840e6a3de6bf721a5516a.js", 
		"URL={URL}/signal/assets/app/pvs/alerts_review/single_case_alert_details-50076305d9a840e6a3de6bf721a5516a.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t150.inf", 
		"LAST");
 
 
 

	web_url("caseHistoryJustification-e00adcb2bfe499584728ed2595e37611.js", 
		"URL={URL}/signal/assets/app/pvs/caseHistory/caseHistoryJustification-e00adcb2bfe499584728ed2595e37611.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t151.inf", 
		"LAST");
 
 
 

	web_url("common_key_prevent-ef5634527119e90cc2576f0ef956085c.js", 
		"URL={URL}/signal/assets/app/pvs/alert_utils/common_key_prevent-ef5634527119e90cc2576f0ef956085c.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t152.inf", 
		"LAST");
 
 
 

	web_url("priority-change-aab9e07e8f32d3a525b119f57b621288.js", 
		"URL={URL}/signal/assets/app/pvs/priority/priority-change-aab9e07e8f32d3a525b119f57b621288.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t153.inf", 
		"LAST");
 
 
 

	web_url("disposition-change-90ca5b153d45318b5626d8de75310b64.js", 
		"URL={URL}/signal/assets/app/pvs/disposition/disposition-change-90ca5b153d45318b5626d8de75310b64.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t154.inf", 
		"LAST");
 
 
 

	web_url("underscore-98afbb17ea5a38bed2d9dd4c03c3c624.js", 
		"URL={URL}/signal/assets/backbone/underscore-98afbb17ea5a38bed2d9dd4c03c3c624.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t155.inf", 
		"LAST");
 
 
 

	web_url("backbone-fb26971962c1315514c8ede192bc0252.js", 
		"URL={URL}/signal/assets/backbone/backbone-fb26971962c1315514c8ede192bc0252.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t156.inf", 
		"LAST");
 
 
 

	web_url("advancedFilterQueryBuilder-6a50d7065df84d243f869aadaf8c60eb.js", 
		"URL={URL}/signal/assets/app/pvs/advancedFilter/advancedFilterQueryBuilder-6a50d7065df84d243f869aadaf8c60eb.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t157.inf", 
		"LAST");
 
 
 

	web_url("to_add_container-b1b2fd25e47dbd84f82bc3c80acf5f8b.js", 
		"URL={URL}/signal/assets/app/pvs/query/to_add_container-b1b2fd25e47dbd84f82bc3c80acf5f8b.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t158.inf", 
		"LAST");

	
 
 
 
 
 
 

	web_url("commonTagDetails", 
		"URL={URL}/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("viewColumnInfo", 
		"URL={URL}/signal/viewInstance/viewColumnInfo?viewInstance.id={ViewId}&_=1590390513634", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t160.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
	web_url("info_3", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t163.inf", 
		"Mode=HTTP", 
		"LAST");
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

 
 
 
 
 
 
 
 
 
 

 
 
 
 
 

	web_add_header("X-CSRF-TOKEN",
		"{Csfr_TokenId}");

	web_submit_data("17", 
		"Action={URL}/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t166.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=1", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=dropdown", "ENDITEM", 
		"Name=columns[1][name]", "Value=", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=badge", "ENDITEM", 
		"Name=columns[2][name]", "Value=", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=priority", "ENDITEM", 
		"Name=columns[3][name]", "Value=", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=actions", "ENDITEM", 
		"Name=columns[4][name]", "Value=", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=caseNumber", "ENDITEM", 
		"Name=columns[5][name]", "Value=", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=alertTags", "ENDITEM", 
		"Name=columns[6][name]", "Value=", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", "ENDITEM", 
		"Name=columns[7][name]", "Value=", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=productName", "ENDITEM", 
		"Name=columns[8][name]", "Value=", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=pt", "ENDITEM", 
		"Name=columns[9][name]", "Value=", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=listedness", "ENDITEM", 
		"Name=columns[10][name]", "Value=", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[11][name]", "Value=", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=signalsAndTopics", "ENDITEM", 
		"Name=columns[12][name]", "Value=", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=currentDisposition", "ENDITEM", 
		"Name=columns[13][name]", "Value=", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=disposition", "ENDITEM", 
		"Name=columns[14][name]", "Value=", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=assignedToUser", "ENDITEM", 
		"Name=columns[15][name]", "Value=", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=dueDate", "ENDITEM", 
		"Name=columns[16][name]", "Value=", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=suspProd", "ENDITEM", 
		"Name=columns[17][name]", "Value=", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=conComit", "ENDITEM", 
		"Name=columns[18][name]", "Value=", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=masterPrefTermAll", "ENDITEM", 
		"Name=columns[19][name]", "Value=", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=serious", "ENDITEM", 
		"Name=columns[20][name]", "Value=", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=caseReportType", "ENDITEM", 
		"Name=columns[21][name]", "Value=", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reportersHcpFlag", "ENDITEM", 
		"Name=columns[22][name]", "Value=", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=country", "ENDITEM", 
		"Name=columns[23][name]", "Value=", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=age", "ENDITEM", 
		"Name=columns[24][name]", "Value=", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=gender", "ENDITEM", 
		"Name=columns[25][name]", "Value=", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=rechallenge", "ENDITEM", 
		"Name=columns[26][name]", "Value=", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=lockedDate", "ENDITEM", 
		"Name=columns[27][name]", "Value=", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=death", "ENDITEM", 
		"Name=columns[28][name]", "Value=", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=medErrorsPt", "ENDITEM", 
		"Name=columns[29][name]", "Value=", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[30][name]", "Value=", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=caseType", "ENDITEM", 
		"Name=columns[31][name]", "Value=", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=completenessScore", "ENDITEM", 
		"Name=columns[32][name]", "Value=", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=indNumber", "ENDITEM", 
		"Name=columns[33][name]", "Value=", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=appTypeAndNum", "ENDITEM", 
		"Name=columns[34][name]", "Value=", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=compoundingFlag", "ENDITEM", 
		"Name=columns[35][name]", "Value=", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=submitter", "ENDITEM", 
		"Name=columns[36][name]", "Value=", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=0", "ENDITEM", 
		"Name=order[0][dir]", "Value=asc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=50", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=callingScreen", "Value=review", "ENDITEM", 
		"LAST");
 
 
 

 

	web_url("priority.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/priority.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t167.inf", 
		"LAST");
 
 
 

	web_url("action_drop_down.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/action_drop_down.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t168.inf", 
		"LAST");
 
 
 

	web_url("disposition.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/disposition.hbs", 
		"Resource=1", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t169.inf", 
		"LAST");

	web_concurrent_end(0);
 
 
 
 
 
 
 
 
 
 
 
 
 
 

	lr_end_transaction("S03_04_ClickOnAlertName",2);

	lr_think_time(3);

	lr_start_transaction("S03_05_SelectDetailedView");

	web_url("discardTempChanges", 
		"URL={URL}/signal/viewInstance/discardTempChanges?viewInstance.id={ViewId}", 
		"Resource=0", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t171.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Case Narrative",
		"LAST");

	web_url("details_2", 
		"URL={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}", 
		"Snapshot=t172.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("commonTagDetails_2", 
		"URL={URL}/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=true", 
		"Snapshot=t173.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("viewColumnInfo_2", 
		"URL={URL}/signal/viewInstance/viewColumnInfo?viewInstance.id={ViewId}&_=1590390543204", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=true", 
		"Snapshot=t174.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_url("info_4", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=true", 
		"Snapshot=t176.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN",
		"{Csfr_TokenId}");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("17_2", 
		"Action={URL}/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=true", 
		"Snapshot=t177.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=1", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=dropdown", "ENDITEM", 
		"Name=columns[1][name]", "Value=", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=badge", "ENDITEM", 
		"Name=columns[2][name]", "Value=", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=priority", "ENDITEM", 
		"Name=columns[3][name]", "Value=", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=actions", "ENDITEM", 
		"Name=columns[4][name]", "Value=", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=caseNumber", "ENDITEM", 
		"Name=columns[5][name]", "Value=", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=alertTags", "ENDITEM", 
		"Name=columns[6][name]", "Value=", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", "ENDITEM", 
		"Name=columns[7][name]", "Value=", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=productName", "ENDITEM", 
		"Name=columns[8][name]", "Value=", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=pt", "ENDITEM", 
		"Name=columns[9][name]", "Value=", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=listedness", "ENDITEM", 
		"Name=columns[10][name]", "Value=", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[11][name]", "Value=", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=signalsAndTopics", "ENDITEM", 
		"Name=columns[12][name]", "Value=", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=currentDisposition", "ENDITEM", 
		"Name=columns[13][name]", "Value=", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=disposition", "ENDITEM", 
		"Name=columns[14][name]", "Value=", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=assignedToUser", "ENDITEM", 
		"Name=columns[15][name]", "Value=", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=dueDate", "ENDITEM", 
		"Name=columns[16][name]", "Value=", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=suspProd", "ENDITEM", 
		"Name=columns[17][name]", "Value=", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=conComit", "ENDITEM", 
		"Name=columns[18][name]", "Value=", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=masterPrefTermAll", "ENDITEM", 
		"Name=columns[19][name]", "Value=", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=serious", "ENDITEM", 
		"Name=columns[20][name]", "Value=", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=caseReportType", "ENDITEM", 
		"Name=columns[21][name]", "Value=", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reportersHcpFlag", "ENDITEM", 
		"Name=columns[22][name]", "Value=", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=country", "ENDITEM", 
		"Name=columns[23][name]", "Value=", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=age", "ENDITEM", 
		"Name=columns[24][name]", "Value=", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=gender", "ENDITEM", 
		"Name=columns[25][name]", "Value=", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=rechallenge", "ENDITEM", 
		"Name=columns[26][name]", "Value=", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=lockedDate", "ENDITEM", 
		"Name=columns[27][name]", "Value=", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=death", "ENDITEM", 
		"Name=columns[28][name]", "Value=", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=medErrorsPt", "ENDITEM", 
		"Name=columns[29][name]", "Value=", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[30][name]", "Value=", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=caseType", "ENDITEM", 
		"Name=columns[31][name]", "Value=", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=completenessScore", "ENDITEM", 
		"Name=columns[32][name]", "Value=", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=indNumber", "ENDITEM", 
		"Name=columns[33][name]", "Value=", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=appTypeAndNum", "ENDITEM", 
		"Name=columns[34][name]", "Value=", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=compoundingFlag", "ENDITEM", 
		"Name=columns[35][name]", "Value=", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=submitter", "ENDITEM", 
		"Name=columns[36][name]", "Value=", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=0", "ENDITEM", 
		"Name=order[0][dir]", "Value=asc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=50", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=sort", "Value=selected", "ENDITEM", 
		"Name=direction", "Value=asc", "ENDITEM", 
		"Name=callingScreen", "Value=review", "ENDITEM", 
		"LAST");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

 
 
 
 
 
 
 
 
 
 

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("case_details_child_view.hbs", 
		"URL={URL}/signal/assets/app/pvs/hbs-templates/case_details_child_view.hbs", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=true", 
		"Snapshot=t179.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

 
 
 
 
 
 
 
 

	lr_end_transaction("S03_05_SelectDetailedView",2);

	lr_think_time(3);

	lr_start_transaction("S03_06_UnSelectDetailedView");

	web_url("discardTempChanges_2", 
		"URL={URL}/signal/viewInstance/discardTempChanges?viewInstance.id={ViewId}", 
		"Resource=0", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=true", 
		"Snapshot=t182.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details_3", 
		"URL={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=true", 
		"Snapshot=t183.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("commonTagDetails_3", 
		"URL={URL}/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t184.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("viewColumnInfo_3", 
		"URL={URL}/signal/viewInstance/viewColumnInfo?viewInstance.id={ViewId}&_=1590390566920", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t185.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_url("info_5", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t187.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN",
		"{Csfr_TokenId}");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("17_3", 
		"Action={URL}/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t188.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=1", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=dropdown", "ENDITEM", 
		"Name=columns[1][name]", "Value=", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=badge", "ENDITEM", 
		"Name=columns[2][name]", "Value=", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=priority", "ENDITEM", 
		"Name=columns[3][name]", "Value=", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=actions", "ENDITEM", 
		"Name=columns[4][name]", "Value=", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=caseNumber", "ENDITEM", 
		"Name=columns[5][name]", "Value=", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=alertTags", "ENDITEM", 
		"Name=columns[6][name]", "Value=", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", "ENDITEM", 
		"Name=columns[7][name]", "Value=", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=productName", "ENDITEM", 
		"Name=columns[8][name]", "Value=", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=pt", "ENDITEM", 
		"Name=columns[9][name]", "Value=", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=listedness", "ENDITEM", 
		"Name=columns[10][name]", "Value=", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[11][name]", "Value=", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=signalsAndTopics", "ENDITEM", 
		"Name=columns[12][name]", "Value=", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=currentDisposition", "ENDITEM", 
		"Name=columns[13][name]", "Value=", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=disposition", "ENDITEM", 
		"Name=columns[14][name]", "Value=", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=assignedToUser", "ENDITEM", 
		"Name=columns[15][name]", "Value=", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=dueDate", "ENDITEM", 
		"Name=columns[16][name]", "Value=", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=suspProd", "ENDITEM", 
		"Name=columns[17][name]", "Value=", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=conComit", "ENDITEM", 
		"Name=columns[18][name]", "Value=", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=masterPrefTermAll", "ENDITEM", 
		"Name=columns[19][name]", "Value=", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=serious", "ENDITEM", 
		"Name=columns[20][name]", "Value=", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=caseReportType", "ENDITEM", 
		"Name=columns[21][name]", "Value=", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reportersHcpFlag", "ENDITEM", 
		"Name=columns[22][name]", "Value=", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=country", "ENDITEM", 
		"Name=columns[23][name]", "Value=", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=age", "ENDITEM", 
		"Name=columns[24][name]", "Value=", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=gender", "ENDITEM", 
		"Name=columns[25][name]", "Value=", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=rechallenge", "ENDITEM", 
		"Name=columns[26][name]", "Value=", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=lockedDate", "ENDITEM", 
		"Name=columns[27][name]", "Value=", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=death", "ENDITEM", 
		"Name=columns[28][name]", "Value=", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=medErrorsPt", "ENDITEM", 
		"Name=columns[29][name]", "Value=", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[30][name]", "Value=", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=caseType", "ENDITEM", 
		"Name=columns[31][name]", "Value=", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=completenessScore", "ENDITEM", 
		"Name=columns[32][name]", "Value=", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=indNumber", "ENDITEM", 
		"Name=columns[33][name]", "Value=", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=appTypeAndNum", "ENDITEM", 
		"Name=columns[34][name]", "Value=", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=compoundingFlag", "ENDITEM", 
		"Name=columns[35][name]", "Value=", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=submitter", "ENDITEM", 
		"Name=columns[36][name]", "Value=", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=0", "ENDITEM", 
		"Name=order[0][dir]", "Value=asc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=50", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=sort", "Value=selected", "ENDITEM", 
		"Name=direction", "Value=asc", "ENDITEM", 
		"Name=callingScreen", "Value=review", "ENDITEM", 
		"LAST");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

 
 
 
 
 
 
 
 
 
 

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

 
 
 
 
 
 
 
 

	lr_end_transaction("S03_06_UnSelectDetailedView",2);

	lr_think_time(3);

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("fetchPossibleValues", 
		"URL={URL}/signal/singleCaseAlert/fetchPossibleValues?executedconfigId={ConfigId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t191.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("getDateOperators", 
		"URL={URL}/signal/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t192.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("fetchAllFieldValues", 
		"URL={URL}/signal/singleCaseAlert/fetchAllFieldValues?isFaers=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t193.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");


	web_url("getNumOperators", 
		"URL={URL}/signal/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t195.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("getStringOperators", 
		"URL={URL}/signal/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t196.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("getValuelessOperators", 
		"URL={URL}/signal/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t197.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("getAllKeywords", 
		"URL={URL}/signal/query/getAllKeywords", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t198.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");



	web_add_auto_header("Accept", 
		"*/*");

 
 
 
 
 
 
 
 

	lr_start_transaction("S03_07_SaveFilterAndApply");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_auto_header("X-CSRF-TOKEN",
		"{Csfr_TokenId}");

 
	web_reg_save_param_ex(
		"ParamName=FilterId",
		"LB={\"code\":null,\"data\":{\"id\":",
		"RB=,",
		"SEARCH_FILTERS",
		"Scope=Body",
		"LAST");

	web_reg_find("Search=Body",
		"Text={FilterName}",
		"LAST");

	web_submit_data("save",
		"Action={URL}/signal/advancedFilter/save",
		"Method=POST",
		"RecContentType=application/json",
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false",
		"Snapshot=t201.inf",
		"Mode=HTTP",
		"ITEMDATA",
		"Name=alertType", "Value=Single Case Alert", "ENDITEM",
		"Name=filterId", "Value=", "ENDITEM",
		"Name=name", "Value={FilterName}", "ENDITEM",
		"Name=description", "Value=", "ENDITEM",
		"Name=selectField", "Value=priority.id", "ENDITEM",
		"Name=selectOperator", "Value=EQUALS", "ENDITEM",
		"Name=selectValue", "Value=", "ENDITEM",
		"Name=selectSelect", "Value=6667", "ENDITEM",
		"Name=selectDate", "Value=05/25/2020", "ENDITEM",
		"Name=JSONQuery", "Value={\"all\":{\"containerGroups\":[ {\"expressions\":[ {\"index\":\"0\",\"field\":\"priority.id\",\"op\":\"EQUALS\",\"value\":\"6667\"} ] }  ] } }", "ENDITEM",
		"Name=hasBlanks", "Value=false", "ENDITEM",
		"Name=selectField", "Value=priority.id", "ENDITEM",
		"Name=selectOperator", "Value=EQUALS", "ENDITEM",
		"Name=selectValue", "Value=", "ENDITEM",
		"Name=selectSelect", "Value=6667", "ENDITEM",
		"Name=selectDate", "Value=05/25/2020", "ENDITEM",
		"Name=_csrf", "Value={Csfr_TokenId}", "ENDITEM",
		"LAST");

	web_submit_data("17_4", 
		"Action={URL}/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t202.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=2", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=dropdown", "ENDITEM", 
		"Name=columns[1][name]", "Value=", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=badge", "ENDITEM", 
		"Name=columns[2][name]", "Value=", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=priority", "ENDITEM", 
		"Name=columns[3][name]", "Value=", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=actions", "ENDITEM", 
		"Name=columns[4][name]", "Value=", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=caseNumber", "ENDITEM", 
		"Name=columns[5][name]", "Value=", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=alertTags", "ENDITEM", 
		"Name=columns[6][name]", "Value=", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", "ENDITEM", 
		"Name=columns[7][name]", "Value=", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=productName", "ENDITEM", 
		"Name=columns[8][name]", "Value=", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=pt", "ENDITEM", 
		"Name=columns[9][name]", "Value=", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=listedness", "ENDITEM", 
		"Name=columns[10][name]", "Value=", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[11][name]", "Value=", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=signalsAndTopics", "ENDITEM", 
		"Name=columns[12][name]", "Value=", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=currentDisposition", "ENDITEM", 
		"Name=columns[13][name]", "Value=", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=assignedToUser", "ENDITEM", 
		"Name=columns[14][name]", "Value=", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=dueDate", "ENDITEM", 
		"Name=columns[15][name]", "Value=", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=serious", "ENDITEM", 
		"Name=columns[16][name]", "Value=", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=disposition", "ENDITEM", 
		"Name=columns[17][name]", "Value=", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=suspProd", "ENDITEM", 
		"Name=columns[18][name]", "Value=", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=conComit", "ENDITEM", 
		"Name=columns[19][name]", "Value=", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=masterPrefTermAll", "ENDITEM", 
		"Name=columns[20][name]", "Value=", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=caseReportType", "ENDITEM", 
		"Name=columns[21][name]", "Value=", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reportersHcpFlag", "ENDITEM", 
		"Name=columns[22][name]", "Value=", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=country", "ENDITEM", 
		"Name=columns[23][name]", "Value=", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=age", "ENDITEM", 
		"Name=columns[24][name]", "Value=", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=gender", "ENDITEM", 
		"Name=columns[25][name]", "Value=", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=rechallenge", "ENDITEM", 
		"Name=columns[26][name]", "Value=", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=lockedDate", "ENDITEM", 
		"Name=columns[27][name]", "Value=", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=death", "ENDITEM", 
		"Name=columns[28][name]", "Value=", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=medErrorsPt", "ENDITEM", 
		"Name=columns[29][name]", "Value=", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[30][name]", "Value=", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=caseType", "ENDITEM", 
		"Name=columns[31][name]", "Value=", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=completenessScore", "ENDITEM", 
		"Name=columns[32][name]", "Value=", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=indNumber", "ENDITEM", 
		"Name=columns[33][name]", "Value=", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=appTypeAndNum", "ENDITEM", 
		"Name=columns[34][name]", "Value=", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=compoundingFlag", "ENDITEM", 
		"Name=columns[35][name]", "Value=", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=submitter", "ENDITEM", 
		"Name=columns[36][name]", "Value=", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=0", "ENDITEM", 
		"Name=order[0][dir]", "Value=asc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=50", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=sort", "Value=selected", "ENDITEM", 
		"Name=direction", "Value=asc", "ENDITEM", 
		"Name=advancedFilterId", "Value={FilterId}", "ENDITEM", 
		"Name=queryJSON", "Value={\"all\":{\"containerGroups\":[ {\"expressions\":[ {\"index\":\"0\",\"field\":\"priority.id\",\"op\":\"EQUALS\",\"value\":\"6667\"} ] }  ] } }", "ENDITEM", 
		"Name=callingScreen", "Value=review", "ENDITEM", 
		"LAST");

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	
	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-CSRF-TOKEN", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

 
 
 
 
 
 
 
 

	lr_end_transaction("S03_07_SaveFilterAndApply",2);

	lr_think_time(3);

 
 
 
 
 
 
 
 

	lr_start_transaction("EditFilter");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_url("fetchAdvancedFilterInfo", 
		"URL={URL}/signal/advancedFilter/fetchAdvancedFilterInfo?advancedFilter.id={FilterId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t206.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("fetchPossibleValues_2", 
		"URL={URL}/signal/singleCaseAlert/fetchPossibleValues?executedconfigId={ConfigId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t207.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("fetchAllFieldValues_2", 
		"URL={URL}/signal/singleCaseAlert/fetchAllFieldValues?isFaers=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t208.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("getValuelessOperators_2", 
		"URL={URL}/signal/query/getValuelessOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t209.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("getStringOperators_2", 
		"URL={URL}/signal/query/getStringOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t210.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("getDateOperators_2", 
		"URL={URL}/signal/query/getDateOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t211.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("getAllKeywords_2", 
		"URL={URL}/signal/query/getAllKeywords", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t212.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("getNumOperators_2", 
		"URL={URL}/signal/query/getNumOperators", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t213.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

 
 
 
 
 
 
 
 

	lr_end_transaction("EditFilter",2);

	lr_think_time(3);

	lr_start_transaction("S03_08_Delete filter");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN",
		"{Csfr_TokenId}");

	web_submit_data("delete", 
		"Action={URL}/signal/advancedFilter/delete", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t215.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=id", "Value={FilterId}", "ENDITEM", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

	web_url("discardTempChanges_3", 
		"URL={URL}/signal/viewInstance/discardTempChanges?viewInstance.id={ViewId}", 
		"Resource=0", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t216.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Cache-Control", 
		"max-age=0");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details_4", 
		"URL={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t217.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("commonTagDetails_4", 
		"URL={URL}/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t218.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("viewColumnInfo_4", 
		"URL={URL}/signal/viewInstance/viewColumnInfo?viewInstance.id={ViewId}&_=1590390656240", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t219.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_url("info_6", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t221.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN",
		"{Csfr_TokenId}");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("17_5", 
		"Action={URL}/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t222.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=1", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=dropdown", "ENDITEM", 
		"Name=columns[1][name]", "Value=", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=badge", "ENDITEM", 
		"Name=columns[2][name]", "Value=", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=priority", "ENDITEM", 
		"Name=columns[3][name]", "Value=", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=actions", "ENDITEM", 
		"Name=columns[4][name]", "Value=", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=caseNumber", "ENDITEM", 
		"Name=columns[5][name]", "Value=", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=alertTags", "ENDITEM", 
		"Name=columns[6][name]", "Value=", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", "ENDITEM", 
		"Name=columns[7][name]", "Value=", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=productName", "ENDITEM", 
		"Name=columns[8][name]", "Value=", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=pt", "ENDITEM", 
		"Name=columns[9][name]", "Value=", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=listedness", "ENDITEM", 
		"Name=columns[10][name]", "Value=", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[11][name]", "Value=", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=signalsAndTopics", "ENDITEM", 
		"Name=columns[12][name]", "Value=", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=currentDisposition", "ENDITEM", 
		"Name=columns[13][name]", "Value=", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=disposition", "ENDITEM", 
		"Name=columns[14][name]", "Value=", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=assignedToUser", "ENDITEM", 
		"Name=columns[15][name]", "Value=", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=dueDate", "ENDITEM", 
		"Name=columns[16][name]", "Value=", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=suspProd", "ENDITEM", 
		"Name=columns[17][name]", "Value=", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=conComit", "ENDITEM", 
		"Name=columns[18][name]", "Value=", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=masterPrefTermAll", "ENDITEM", 
		"Name=columns[19][name]", "Value=", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=serious", "ENDITEM", 
		"Name=columns[20][name]", "Value=", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=caseReportType", "ENDITEM", 
		"Name=columns[21][name]", "Value=", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reportersHcpFlag", "ENDITEM", 
		"Name=columns[22][name]", "Value=", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=country", "ENDITEM", 
		"Name=columns[23][name]", "Value=", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=age", "ENDITEM", 
		"Name=columns[24][name]", "Value=", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=gender", "ENDITEM", 
		"Name=columns[25][name]", "Value=", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=rechallenge", "ENDITEM", 
		"Name=columns[26][name]", "Value=", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=lockedDate", "ENDITEM", 
		"Name=columns[27][name]", "Value=", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=death", "ENDITEM", 
		"Name=columns[28][name]", "Value=", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=medErrorsPt", "ENDITEM", 
		"Name=columns[29][name]", "Value=", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[30][name]", "Value=", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=caseType", "ENDITEM", 
		"Name=columns[31][name]", "Value=", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=completenessScore", "ENDITEM", 
		"Name=columns[32][name]", "Value=", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=indNumber", "ENDITEM", 
		"Name=columns[33][name]", "Value=", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=appTypeAndNum", "ENDITEM", 
		"Name=columns[34][name]", "Value=", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=compoundingFlag", "ENDITEM", 
		"Name=columns[35][name]", "Value=", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=submitter", "ENDITEM", 
		"Name=columns[36][name]", "Value=", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=0", "ENDITEM", 
		"Name=order[0][dir]", "Value=asc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=50", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=sort", "Value=selected", "ENDITEM", 
		"Name=direction", "Value=asc", "ENDITEM", 
		"Name=callingScreen", "Value=review", "ENDITEM", 
		"LAST");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

 
 
 
 
 
 
 
 
 
 

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

 
 
 
 
 
 
 
 

	lr_end_transaction("S03_08_Delete filter",2);

	lr_think_time(3);

	lr_start_transaction("AddView");

	web_url("viewColumnInfo_5", 
		"URL={URL}/signal/viewInstance/viewColumnInfo?viewInstance.id={ViewId}&_=1590390656243", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t225.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 
 
	web_add_auto_header("X-CSRF-TOKEN",
		"{Csfr_TokenId}");

	web_submit_data("updateViewColumnInfo", 
		"Action={URL}/signal/viewInstance/updateViewColumnInfo?viewInstance.id={ViewId}", 
		"Method=POST", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t227.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=columnList", "Value=[{\"label\":\"Categories\",\"name\":\"alertTags\",\"containerView\":1,\"seq\":6,\"listOrder\":0},{\"label\":\"Receipt Date\",\"name\":\"caseInitReceiptDate\",\"containerView\":1,\"seq\":7,\"listOrder\":1},{\"label\":\"Product Name\",\"name\":\"productName\",\"containerView\":1,\"seq\":8,\"listOrder\":2},{\"label\":\"PT\",\"name\":\"pt\",\"containerView\":1,\"seq\":9,\"listOrder\":3},{\"label\":\"Listedness\",\"name\":\"listedness\",\"containerView\":1,\"seq\":10,\""
		"listOrder\":4},{\"label\":\"Outcome\",\"name\":\"outcome\",\"containerView\":1,\"seq\":11,\"listOrder\":5},{\"label\":\"Signal / Topic\",\"name\":\"signalsAndTopics\",\"containerView\":1,\"seq\":12,\"listOrder\":6},{\"label\":\"Disposition\",\"name\":\"currentDisposition\",\"containerView\":1,\"seq\":13,\"listOrder\":7},{\"label\":\"Suspect Products\",\"name\":\"suspProd\",\"containerView\":1,\"seq\":17,\"listOrder\":8},{\"label\":\"Current Disposition\",\"name\":\"disposition\",\"containerView\""
		":1,\"seq\":14,\"listOrder\":9},{\"label\":\"Assigned To\",\"name\":\"assignedToUser\",\"containerView\":1,\"seq\":15,\"listOrder\":10},{\"label\":\"Due In\",\"name\":\"dueDate\",\"containerView\":1,\"seq\":16,\"listOrder\":11},{\"label\":\"Serious\",\"name\":\"serious\",\"containerView\":1,\"seq\":20,\"listOrder\":12},{\"label\":\"Con Med\",\"name\":\"conComit\",\"containerView\":3,\"seq\":18,\"listOrder\":9999},{\"label\":\"PT List\",\"name\":\"masterPrefTermAll\",\"containerView\":3,\"seq\":19,"
		"\"listOrder\":9999},{\"label\":\"Report Type\",\"name\":\"caseReportType\",\"containerView\":3,\"seq\":21,\"listOrder\":9999},{\"label\":\"HCP\",\"name\":\"reportersHcpFlag\",\"containerView\":3,\"seq\":22,\"listOrder\":9999},{\"label\":\"Country\",\"name\":\"country\",\"containerView\":3,\"seq\":23,\"listOrder\":9999},{\"label\":\"Age Group\",\"name\":\"age\",\"containerView\":3,\"seq\":24,\"listOrder\":9999},{\"label\":\"Gender\",\"name\":\"gender\",\"containerView\":3,\"seq\":25,\"listOrder\""
		":9999},{\"label\":\"Positive Rechallenge\",\"name\":\"rechallenge\",\"containerView\":3,\"seq\":26,\"listOrder\":9999},{\"label\":\"Locked Date\",\"name\":\"lockedDate\",\"containerView\":3,\"seq\":27,\"listOrder\":9999},{\"label\":\"Death\",\"name\":\"death\",\"containerView\":3,\"seq\":28,\"listOrder\":9999},{\"label\":\"Medication Error PTs\",\"name\":\"medErrorsPt\",\"containerView\":3,\"seq\":29,\"listOrder\":9999},{\"label\":\"Age\",\"name\":\"patientAge\",\"containerView\":3,\"seq\":30,\""
		"listOrder\":9999},{\"label\":\"Case Type\",\"name\":\"caseType\",\"containerView\":3,\"seq\":31,\"listOrder\":9999},{\"label\":\"Completeness Score\",\"name\":\"completenessScore\",\"containerView\":3,\"seq\":32,\"listOrder\":9999},{\"label\":\"Primary IND#\",\"name\":\"indNumber\",\"containerView\":3,\"seq\":33,\"listOrder\":9999},{\"label\":\"Application#\",\"name\":\"appTypeAndNum\",\"containerView\":3,\"seq\":34,\"listOrder\":9999},{\"label\":\"Compounding Flag\",\"name\":\"compoundingFlag\","
		"\"containerView\":3,\"seq\":35,\"listOrder\":9999},{\"label\":\"Submitter\",\"name\":\"submitter\",\"containerView\":3,\"seq\":36,\"listOrder\":9999}]", "ENDITEM", 
		"LAST");

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_submit_data("17_6", 
		"Action={URL}/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t228.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=2", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=dropdown", "ENDITEM", 
		"Name=columns[1][name]", "Value=", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=badge", "ENDITEM", 
		"Name=columns[2][name]", "Value=", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=priority", "ENDITEM", 
		"Name=columns[3][name]", "Value=", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=actions", "ENDITEM", 
		"Name=columns[4][name]", "Value=", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=caseNumber", "ENDITEM", 
		"Name=columns[5][name]", "Value=", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=alertTags", "ENDITEM", 
		"Name=columns[6][name]", "Value=", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", "ENDITEM", 
		"Name=columns[7][name]", "Value=", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=productName", "ENDITEM", 
		"Name=columns[8][name]", "Value=", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=pt", "ENDITEM", 
		"Name=columns[9][name]", "Value=", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=listedness", "ENDITEM", 
		"Name=columns[10][name]", "Value=", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[11][name]", "Value=", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=signalsAndTopics", "ENDITEM", 
		"Name=columns[12][name]", "Value=", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=currentDisposition", "ENDITEM", 
		"Name=columns[13][name]", "Value=", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=suspProd", "ENDITEM", 
		"Name=columns[14][name]", "Value=", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=disposition", "ENDITEM", 
		"Name=columns[15][name]", "Value=", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=assignedToUser", "ENDITEM", 
		"Name=columns[16][name]", "Value=", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=dueDate", "ENDITEM", 
		"Name=columns[17][name]", "Value=", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=serious", "ENDITEM", 
		"Name=columns[18][name]", "Value=", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=conComit", "ENDITEM", 
		"Name=columns[19][name]", "Value=", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=masterPrefTermAll", "ENDITEM", 
		"Name=columns[20][name]", "Value=", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=caseReportType", "ENDITEM", 
		"Name=columns[21][name]", "Value=", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reportersHcpFlag", "ENDITEM", 
		"Name=columns[22][name]", "Value=", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=country", "ENDITEM", 
		"Name=columns[23][name]", "Value=", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=age", "ENDITEM", 
		"Name=columns[24][name]", "Value=", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=gender", "ENDITEM", 
		"Name=columns[25][name]", "Value=", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=rechallenge", "ENDITEM", 
		"Name=columns[26][name]", "Value=", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=lockedDate", "ENDITEM", 
		"Name=columns[27][name]", "Value=", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=death", "ENDITEM", 
		"Name=columns[28][name]", "Value=", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=medErrorsPt", "ENDITEM", 
		"Name=columns[29][name]", "Value=", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[30][name]", "Value=", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=caseType", "ENDITEM", 
		"Name=columns[31][name]", "Value=", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=completenessScore", "ENDITEM", 
		"Name=columns[32][name]", "Value=", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=indNumber", "ENDITEM", 
		"Name=columns[33][name]", "Value=", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=appTypeAndNum", "ENDITEM", 
		"Name=columns[34][name]", "Value=", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=compoundingFlag", "ENDITEM", 
		"Name=columns[35][name]", "Value=", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=submitter", "ENDITEM", 
		"Name=columns[36][name]", "Value=", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=0", "ENDITEM", 
		"Name=order[0][dir]", "Value=asc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=50", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=sort", "Value=selected", "ENDITEM", 
		"Name=direction", "Value=asc", "ENDITEM", 
		"Name=callingScreen", "Value=review", "ENDITEM", 
		"LAST");

	lr_end_transaction("AddView",2);

	lr_think_time(3);
	

	lr_start_transaction("S03_09_SaveView");

	web_submit_data("saveView", 
		"Action={URL}/signal/viewInstance/saveView", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t229.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=name", "Value={View_Name}", "ENDITEM", 
		"Name=filterMap", "Value={}", "ENDITEM", 
		"Name=columnList", "Value=", "ENDITEM", 
		"Name=alertType", "Value=Single Case Alert", "ENDITEM", 
		"Name=sorting", "Value={\"0\":\"asc\"}", "ENDITEM", 
		"Name=advancedFilter", "Value=", "ENDITEM", 
		"Name=currentViewId", "Value={ViewId}", "ENDITEM", 
		"Name=defaultView", "Value=false", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("X-CSRF-TOKEN", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

	web_url("discardTempChanges_4", 
		"URL={URL}/signal/viewInstance/discardTempChanges?viewInstance.id={ViewId}", 
		"Resource=0", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t230.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text={View_Name}",
		"LAST");

	web_url("details_5", 
		"URL={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId=15636", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}&isCaseDetailView=false", 
		"Snapshot=t231.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("commonTagDetails_5", 
		"URL={URL}/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId=15636", 
		"Snapshot=t232.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("viewColumnInfo_6", 
		"URL={URL}/signal/viewInstance/viewColumnInfo?viewInstance.id=15636&_=1590390747961", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId=15636", 
		"Snapshot=t233.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 

	web_add_header("X-Goog-Encode-Response-If-Executable", 
		"base64");

	web_add_header("X-Goog-Api-Key", 
		"AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	

	web_add_auto_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN",
		"{Csfr_TokenId}");

	web_submit_data("17_7", 
		"Action={URL}/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId=15636", 
		"Snapshot=t236.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=1", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=dropdown", "ENDITEM", 
		"Name=columns[1][name]", "Value=", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=badge", "ENDITEM", 
		"Name=columns[2][name]", "Value=", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=priority", "ENDITEM", 
		"Name=columns[3][name]", "Value=", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=actions", "ENDITEM", 
		"Name=columns[4][name]", "Value=", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=caseNumber", "ENDITEM", 
		"Name=columns[5][name]", "Value=", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=alertTags", "ENDITEM", 
		"Name=columns[6][name]", "Value=", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", "ENDITEM", 
		"Name=columns[7][name]", "Value=", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=productName", "ENDITEM", 
		"Name=columns[8][name]", "Value=", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=pt", "ENDITEM", 
		"Name=columns[9][name]", "Value=", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=listedness", "ENDITEM", 
		"Name=columns[10][name]", "Value=", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[11][name]", "Value=", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=signalsAndTopics", "ENDITEM", 
		"Name=columns[12][name]", "Value=", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=currentDisposition", "ENDITEM", 
		"Name=columns[13][name]", "Value=", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=disposition", "ENDITEM", 
		"Name=columns[14][name]", "Value=", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=assignedToUser", "ENDITEM", 
		"Name=columns[15][name]", "Value=", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=dueDate", "ENDITEM", 
		"Name=columns[16][name]", "Value=", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=suspProd", "ENDITEM", 
		"Name=columns[17][name]", "Value=", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=conComit", "ENDITEM", 
		"Name=columns[18][name]", "Value=", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=masterPrefTermAll", "ENDITEM", 
		"Name=columns[19][name]", "Value=", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=serious", "ENDITEM", 
		"Name=columns[20][name]", "Value=", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=caseReportType", "ENDITEM", 
		"Name=columns[21][name]", "Value=", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reportersHcpFlag", "ENDITEM", 
		"Name=columns[22][name]", "Value=", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=country", "ENDITEM", 
		"Name=columns[23][name]", "Value=", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=age", "ENDITEM", 
		"Name=columns[24][name]", "Value=", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=gender", "ENDITEM", 
		"Name=columns[25][name]", "Value=", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=rechallenge", "ENDITEM", 
		"Name=columns[26][name]", "Value=", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=lockedDate", "ENDITEM", 
		"Name=columns[27][name]", "Value=", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=death", "ENDITEM", 
		"Name=columns[28][name]", "Value=", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=medErrorsPt", "ENDITEM", 
		"Name=columns[29][name]", "Value=", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[30][name]", "Value=", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=caseType", "ENDITEM", 
		"Name=columns[31][name]", "Value=", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=completenessScore", "ENDITEM", 
		"Name=columns[32][name]", "Value=", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=indNumber", "ENDITEM", 
		"Name=columns[33][name]", "Value=", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=appTypeAndNum", "ENDITEM", 
		"Name=columns[34][name]", "Value=", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=compoundingFlag", "ENDITEM", 
		"Name=columns[35][name]", "Value=", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=submitter", "ENDITEM", 
		"Name=columns[36][name]", "Value=", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=0", "ENDITEM", 
		"Name=order[0][dir]", "Value=asc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=50", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=sort", "Value=selected", "ENDITEM", 
		"Name=direction", "Value=asc", "ENDITEM", 
		"Name=callingScreen", "Value=review", "ENDITEM", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"*/*");

	web_url("info_7", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId=15636", 
		"Snapshot=t237.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

 
 
 
 
 
 
 
 
 
 

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

 
 
 
 
 
 
 
 

	lr_end_transaction("S03_09_SaveView",2);

	lr_think_time(3);

 
 
 
 
 
 
 
 

	lr_start_transaction("S03_10_SystemView");

	web_url("discardTempChanges_5", 
		"URL={URL}/signal/viewInstance/discardTempChanges?viewInstance.id=15636", 
		"Resource=0", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId=15636", 
		"Snapshot=t241.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("details_6", 
		"URL={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId=15636", 
		"Snapshot=t242.inf", 
		"Mode=HTTP", 
		"LAST");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("commonTagDetails_6", 
		"URL={URL}/signal/commonTag/commonTagDetails", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}", 
		"Snapshot=t243.inf", 
		"Mode=HTTP", 
		"LAST");

	web_url("viewColumnInfo_7", 
		"URL={URL}/signal/viewInstance/viewColumnInfo?viewInstance.id={ViewId}&_=1590390778358", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}", 
		"Snapshot=t244.inf", 
		"Mode=HTTP", 
		"LAST");

 
 
 
 
 
 
 
 

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_url("info_8", 
		"URL={URL}/signal/stomp/info", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}", 
		"Snapshot=t246.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("Accept", "ImplicitGen=Yes", "LAST"));

	web_add_header("Accept", 
		"application/json, text/javascript, */*; q=0.01");

	web_add_header("X-CSRF-TOKEN",
		"{Csfr_TokenId}");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("17_8", 
		"Action={URL}/signal/singleCaseAlert/listByExecutedConfig/17?cumulative=false&adhocRun=false&dashboardFilter=&tagName=&isFilterRequest=false&filters=[]", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}", 
		"Snapshot=t247.inf", 
		"Mode=HTTP", 
		"ITEMDATA", 
		"Name=draw", "Value=1", "ENDITEM", 
		"Name=columns[0][data]", "Value=selected", "ENDITEM", 
		"Name=columns[0][name]", "Value=", "ENDITEM", 
		"Name=columns[0][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[0][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[0][search][value]", "Value=", "ENDITEM", 
		"Name=columns[0][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[1][data]", "Value=dropdown", "ENDITEM", 
		"Name=columns[1][name]", "Value=", "ENDITEM", 
		"Name=columns[1][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[1][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[1][search][value]", "Value=", "ENDITEM", 
		"Name=columns[1][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[2][data]", "Value=badge", "ENDITEM", 
		"Name=columns[2][name]", "Value=", "ENDITEM", 
		"Name=columns[2][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[2][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[2][search][value]", "Value=", "ENDITEM", 
		"Name=columns[2][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[3][data]", "Value=priority", "ENDITEM", 
		"Name=columns[3][name]", "Value=", "ENDITEM", 
		"Name=columns[3][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[3][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[3][search][value]", "Value=", "ENDITEM", 
		"Name=columns[3][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[4][data]", "Value=actions", "ENDITEM", 
		"Name=columns[4][name]", "Value=", "ENDITEM", 
		"Name=columns[4][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[4][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[4][search][value]", "Value=", "ENDITEM", 
		"Name=columns[4][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[5][data]", "Value=caseNumber", "ENDITEM", 
		"Name=columns[5][name]", "Value=", "ENDITEM", 
		"Name=columns[5][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[5][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[5][search][value]", "Value=", "ENDITEM", 
		"Name=columns[5][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[6][data]", "Value=alertTags", "ENDITEM", 
		"Name=columns[6][name]", "Value=", "ENDITEM", 
		"Name=columns[6][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[6][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[6][search][value]", "Value=", "ENDITEM", 
		"Name=columns[6][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[7][data]", "Value=caseInitReceiptDate", "ENDITEM", 
		"Name=columns[7][name]", "Value=", "ENDITEM", 
		"Name=columns[7][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[7][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[7][search][value]", "Value=", "ENDITEM", 
		"Name=columns[7][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[8][data]", "Value=productName", "ENDITEM", 
		"Name=columns[8][name]", "Value=", "ENDITEM", 
		"Name=columns[8][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[8][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[8][search][value]", "Value=", "ENDITEM", 
		"Name=columns[8][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[9][data]", "Value=pt", "ENDITEM", 
		"Name=columns[9][name]", "Value=", "ENDITEM", 
		"Name=columns[9][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[9][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[9][search][value]", "Value=", "ENDITEM", 
		"Name=columns[9][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[10][data]", "Value=listedness", "ENDITEM", 
		"Name=columns[10][name]", "Value=", "ENDITEM", 
		"Name=columns[10][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[10][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[10][search][value]", "Value=", "ENDITEM", 
		"Name=columns[10][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[11][data]", "Value=outcome", "ENDITEM", 
		"Name=columns[11][name]", "Value=", "ENDITEM", 
		"Name=columns[11][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[11][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[11][search][value]", "Value=", "ENDITEM", 
		"Name=columns[11][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[12][data]", "Value=signalsAndTopics", "ENDITEM", 
		"Name=columns[12][name]", "Value=", "ENDITEM", 
		"Name=columns[12][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[12][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[12][search][value]", "Value=", "ENDITEM", 
		"Name=columns[12][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[13][data]", "Value=currentDisposition", "ENDITEM", 
		"Name=columns[13][name]", "Value=", "ENDITEM", 
		"Name=columns[13][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[13][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[13][search][value]", "Value=", "ENDITEM", 
		"Name=columns[13][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[14][data]", "Value=disposition", "ENDITEM", 
		"Name=columns[14][name]", "Value=", "ENDITEM", 
		"Name=columns[14][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[14][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[14][search][value]", "Value=", "ENDITEM", 
		"Name=columns[14][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[15][data]", "Value=assignedToUser", "ENDITEM", 
		"Name=columns[15][name]", "Value=", "ENDITEM", 
		"Name=columns[15][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[15][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[15][search][value]", "Value=", "ENDITEM", 
		"Name=columns[15][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[16][data]", "Value=dueDate", "ENDITEM", 
		"Name=columns[16][name]", "Value=", "ENDITEM", 
		"Name=columns[16][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[16][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[16][search][value]", "Value=", "ENDITEM", 
		"Name=columns[16][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[17][data]", "Value=suspProd", "ENDITEM", 
		"Name=columns[17][name]", "Value=", "ENDITEM", 
		"Name=columns[17][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[17][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[17][search][value]", "Value=", "ENDITEM", 
		"Name=columns[17][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[18][data]", "Value=conComit", "ENDITEM", 
		"Name=columns[18][name]", "Value=", "ENDITEM", 
		"Name=columns[18][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[18][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[18][search][value]", "Value=", "ENDITEM", 
		"Name=columns[18][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[19][data]", "Value=masterPrefTermAll", "ENDITEM", 
		"Name=columns[19][name]", "Value=", "ENDITEM", 
		"Name=columns[19][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[19][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[19][search][value]", "Value=", "ENDITEM", 
		"Name=columns[19][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[20][data]", "Value=serious", "ENDITEM", 
		"Name=columns[20][name]", "Value=", "ENDITEM", 
		"Name=columns[20][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[20][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[20][search][value]", "Value=", "ENDITEM", 
		"Name=columns[20][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[21][data]", "Value=caseReportType", "ENDITEM", 
		"Name=columns[21][name]", "Value=", "ENDITEM", 
		"Name=columns[21][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[21][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[21][search][value]", "Value=", "ENDITEM", 
		"Name=columns[21][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[22][data]", "Value=reportersHcpFlag", "ENDITEM", 
		"Name=columns[22][name]", "Value=", "ENDITEM", 
		"Name=columns[22][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[22][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[22][search][value]", "Value=", "ENDITEM", 
		"Name=columns[22][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[23][data]", "Value=country", "ENDITEM", 
		"Name=columns[23][name]", "Value=", "ENDITEM", 
		"Name=columns[23][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[23][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[23][search][value]", "Value=", "ENDITEM", 
		"Name=columns[23][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[24][data]", "Value=age", "ENDITEM", 
		"Name=columns[24][name]", "Value=", "ENDITEM", 
		"Name=columns[24][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[24][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[24][search][value]", "Value=", "ENDITEM", 
		"Name=columns[24][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[25][data]", "Value=gender", "ENDITEM", 
		"Name=columns[25][name]", "Value=", "ENDITEM", 
		"Name=columns[25][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[25][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[25][search][value]", "Value=", "ENDITEM", 
		"Name=columns[25][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[26][data]", "Value=rechallenge", "ENDITEM", 
		"Name=columns[26][name]", "Value=", "ENDITEM", 
		"Name=columns[26][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[26][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[26][search][value]", "Value=", "ENDITEM", 
		"Name=columns[26][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[27][data]", "Value=lockedDate", "ENDITEM", 
		"Name=columns[27][name]", "Value=", "ENDITEM", 
		"Name=columns[27][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[27][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[27][search][value]", "Value=", "ENDITEM", 
		"Name=columns[27][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[28][data]", "Value=death", "ENDITEM", 
		"Name=columns[28][name]", "Value=", "ENDITEM", 
		"Name=columns[28][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[28][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[28][search][value]", "Value=", "ENDITEM", 
		"Name=columns[28][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[29][data]", "Value=medErrorsPt", "ENDITEM", 
		"Name=columns[29][name]", "Value=", "ENDITEM", 
		"Name=columns[29][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[29][orderable]", "Value=false", "ENDITEM", 
		"Name=columns[29][search][value]", "Value=", "ENDITEM", 
		"Name=columns[29][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[30][data]", "Value=patientAge", "ENDITEM", 
		"Name=columns[30][name]", "Value=", "ENDITEM", 
		"Name=columns[30][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[30][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[30][search][value]", "Value=", "ENDITEM", 
		"Name=columns[30][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[31][data]", "Value=caseType", "ENDITEM", 
		"Name=columns[31][name]", "Value=", "ENDITEM", 
		"Name=columns[31][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[31][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[31][search][value]", "Value=", "ENDITEM", 
		"Name=columns[31][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[32][data]", "Value=completenessScore", "ENDITEM", 
		"Name=columns[32][name]", "Value=", "ENDITEM", 
		"Name=columns[32][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[32][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[32][search][value]", "Value=", "ENDITEM", 
		"Name=columns[32][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[33][data]", "Value=indNumber", "ENDITEM", 
		"Name=columns[33][name]", "Value=", "ENDITEM", 
		"Name=columns[33][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[33][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[33][search][value]", "Value=", "ENDITEM", 
		"Name=columns[33][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[34][data]", "Value=appTypeAndNum", "ENDITEM", 
		"Name=columns[34][name]", "Value=", "ENDITEM", 
		"Name=columns[34][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[34][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[34][search][value]", "Value=", "ENDITEM", 
		"Name=columns[34][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[35][data]", "Value=compoundingFlag", "ENDITEM", 
		"Name=columns[35][name]", "Value=", "ENDITEM", 
		"Name=columns[35][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[35][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[35][search][value]", "Value=", "ENDITEM", 
		"Name=columns[35][search][regex]", "Value=false", "ENDITEM", 
		"Name=columns[36][data]", "Value=submitter", "ENDITEM", 
		"Name=columns[36][name]", "Value=", "ENDITEM", 
		"Name=columns[36][searchable]", "Value=true", "ENDITEM", 
		"Name=columns[36][orderable]", "Value=true", "ENDITEM", 
		"Name=columns[36][search][value]", "Value=", "ENDITEM", 
		"Name=columns[36][search][regex]", "Value=false", "ENDITEM", 
		"Name=order[0][column]", "Value=0", "ENDITEM", 
		"Name=order[0][dir]", "Value=asc", "ENDITEM", 
		"Name=start", "Value=0", "ENDITEM", 
		"Name=length", "Value=50", "ENDITEM", 
		"Name=search[value]", "Value=", "ENDITEM", 
		"Name=search[regex]", "Value=false", "ENDITEM", 
		"Name=callingScreen", "Value=review", "ENDITEM", 
		"LAST");

	web_add_header("Cache-Control", 
		"no-cache");

	web_add_header("Pragma", 
		"no-cache");

 
 

 
 
 
 
 
 
 

	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"*/*");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

 
 
 
 
 
 
 
 

	lr_end_transaction("S03_10_SystemView",2);

	lr_think_time(3);

	lr_start_transaction("S03_11_Logout");

	web_url("discardTempChanges_6", 
		"URL={URL}/signal/viewInstance/discardTempChanges?viewInstance.id={ViewId}", 
		"Resource=0", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}", 
		"Snapshot=t250.inf", 
		"Mode=HTTP", 
		"LAST");

	(web_remove_auto_header("X-Requested-With", "ImplicitGen=Yes", "LAST"));

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_reg_find("Search=Body",
		"Text=Login",
		"LAST");

	web_url("index", 
		"URL={URL}/signal/logout/index", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer={URL}/signal/singleCaseAlert/details?callingScreen=review&configId={ConfigId}&viewId={ViewId}", 
		"Snapshot=t251.inf", 
		"Mode=HTTP", 
		"LAST");

	lr_end_transaction("S03_11_Logout",2);

	lr_think_time(3);

	return 0;
}
# 5 "c:\\users\\shiva prasad km\\documents\\github\\pvs47_scripts\\newscripts\\s03_qualitative_review\\\\combined_S03_Qualitative_Review.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\shiva prasad km\\documents\\github\\pvs47_scripts\\newscripts\\s03_qualitative_review\\\\combined_S03_Qualitative_Review.c" 2

