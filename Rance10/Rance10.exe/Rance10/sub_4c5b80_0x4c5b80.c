// 函数: sub_4c5b80
// 地址: 0x4c5b80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = __ehhandler$??$_Insert@V?$move_iterator@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@U?$_Task_impl@E@details@Concurrency@@@std@@@std@@@std@@@std@@@std@@@?$vector@V?$shared_ptr@U?$_Task_impl@E@details@Concurrency@@@std@@V?$allocator@V?$shared_ptr@U?$_Task_impl@E@details@Concurrency@@@std@@@2@@std@@QAEXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@U?$_Task_impl@E@details@Concurrency@@@std@@@std@@@std@@@1@V?$move_iterator@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@U?$_Task_impl@E@details@Concurrency@@@std@@@std@@@std@@@std@@@1@1Uforward_iterator_tag@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = arg3
int32_t eax_3 = arg2[1]
*esi = 0

if (eax_3 == arg2[2])
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

int32_t* result = sub_4c56a0(arg1, arg2)

if (result == 0)
    int32_t var_84[0x5]
    sub_54d5a0(&var_84)
    int32_t var_8_1 = 0
    int32_t i = 0
    int32_t eax_5
    int32_t edx_1
    edx_1:eax_5 = muls.dp.d(0x51eb851f, arg2[2] - arg2[1])
    int32_t edx_2 = edx_1 s>> 6
    int32_t eax_8 = (edx_2 u>> 0x1f) + edx_2
    int32_t* result_1
    
    if (eax_8 s<= 0)
    label_4c602b:
        void* edi_1 = var_84[0]
        
        if (edi_1 != 0)
            result_1 = *(edi_1 + 0x118)
        
        if (edi_1 == 0 || result_1 == 0)
            *esi = 1
            result_1 = nullptr
        else
            (**result_1)(eax_2)
            int32_t* ecx_9 = var_84[0]
            
            if (ecx_9 != 0)
                int32_t esi_1 = ecx_9[1]
                ecx_9[1] -= 1
                (**ecx_9)(esi_1 - 1)
                var_84[0] = 0
                char var_70_1 = 1
            
            sub_4c5750(arg1, result_1, arg2)
    else
        while (i s>= 0)
            int32_t eax_9
            int32_t edx_3
            edx_3:eax_9 = muls.dp.d(0x51eb851f, arg2[2] - arg2[1])
            int32_t edx_4 = edx_3 s>> 6
            
            if ((edx_4 u>> 0x1f) + edx_4 s<= i)
                break
            
            void* eax_14 = &arg2[1][i * 0x32]
            
            if (i * 0xc8 == neg.d(arg2[1]))
                break
            
            int32_t ecx_7 = *(eax_14 + 4)
            
            if (ecx_7 u<= 0x1d)
                char eax_16
                
                switch (ecx_7)
                    case 0
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c6380(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 1
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c64b0(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 2
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c65d0(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 3
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c6730(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 4
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c6840(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 5
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c6950(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 6
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c6ac0(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 7
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c6df0(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 8
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c7370(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 9
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c8470(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0xa
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c8610(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0xb
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c87c0(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0xc
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c8ac0(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0xd
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c8eb0(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0xe
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c9230(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0xf
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c96b0(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0x10
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c9810(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0x11
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c99a0(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0x12
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c9b30(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0x13
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c9d10(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0x14
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4ca010(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0x15
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4ca390(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0x16
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4ca690(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0x17
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c7970(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0x18
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4c7ef0(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0x19
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4caa10(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0x1a
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4cab70(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0x1b
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4cacd0(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0x1c
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4cae40(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                    case 0x1d
                        if (*esi != 0)
                            eax_16 = 1
                        else if (sub_4cafb0(&var_84, eax_14) == 0)
                            eax_16 = 1
                        else
                            eax_16 = 0
                
                *esi = eax_16
            
            i += 1
            
            if (i s>= eax_8)
                goto label_4c602b
        
        result_1 = nullptr
    
    Concurrency::details::AllocatorBucket::~AllocatorBucket(&var_84)
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
return result
