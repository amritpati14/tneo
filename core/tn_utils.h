/*

  TNKernel real-time kernel

  Copyright � 2004, 2013 Yuri Tiomkin
  All rights reserved.

  Permission to use, copy, modify, and distribute this software in source
  and binary forms and its documentation for any purpose and without fee
  is hereby granted, provided that the above copyright notice appear
  in all copies and that both that copyright notice and this permission
  notice appear in supporting documentation.

  THIS SOFTWARE IS PROVIDED BY THE YURI TIOMKIN AND CONTRIBUTORS "AS IS" AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL YURI TIOMKIN OR CONTRIBUTORS BE LIABLE
  FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
  OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
  HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
  OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
  SUCH DAMAGE.

*/
/* ver 2.7  */

/*******************************************************************************
 *   Circular double-linked list queue
 ******************************************************************************/



#ifndef  _TN_UTILS_H
#define  _TN_UTILS_H


/*******************************************************************************
 *    INCLUDED FILES
 ******************************************************************************/

#ifdef __cplusplus
extern "C"  {     /*}*/
#endif

/*******************************************************************************
 *    PUBLIC TYPES
 ******************************************************************************/

struct TN_ListItem {
   struct TN_ListItem *prev;
   struct TN_ListItem *next;
};

/*******************************************************************************
 *    GLOBAL VARIABLES
 ******************************************************************************/

/*******************************************************************************
 *    DEFINITIONS
 ******************************************************************************/

/*******************************************************************************
 *    PUBLIC FUNCTION PROTOTYPES
 ******************************************************************************/

void tn_list_reset(struct TN_ListItem *list);
int  tn_is_list_empty(struct TN_ListItem *list);
void tn_list_add_head(struct TN_ListItem *list, struct TN_ListItem *entry);
void tn_list_add_tail(struct TN_ListItem *list, struct TN_ListItem *entry);
struct TN_ListItem *tn_list_remove_head(struct TN_ListItem *list);
struct TN_ListItem *tn_list_remove_tail(struct TN_ListItem *list);
void tn_list_remove_entry(struct TN_ListItem *entry);
int  tn_list_contains_entry(struct TN_ListItem *list, struct TN_ListItem *entry);

#ifdef __cplusplus
}
#endif


#endif // _TN_UTILS_H

/*******************************************************************************
 *    end of file
 ******************************************************************************/


