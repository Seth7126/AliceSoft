// 函数: sub_41dd40
// 地址: 0x41dd40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *arg3
struct _EXCEPTION_REGISTRATION_RECORD** result

if (eax != 0xfffffffd)
    if (eax == 0xfffffffe)
        *arg3 = (*(**(*(arg1 + 4) + 8) + 8))()
    
    if (*arg4 != 0xffffffff)
        result = sub_41dcd0(arg1, arg3, arg4)
        
        if (result.b == 0)
            return result
    
    goto label_41ddc6

struct _EXCEPTION_REGISTRATION_RECORD** ebp_1 = arg4
result = *(arg1 + 4)
struct _EXCEPTION_REGISTRATION_RECORD* ebx_1 = *ebp_1

if (ebx_1 s>= 0 && ebx_1 s< result[2]->Next[5].Next())
    *arg3 = (*(result[2]->Next + 0x2c))(result[2]->Next[5].Next() - 1 - ebx_1 - 1)
    *ebp_1 = 0xffffffff
label_41ddc6:
    
    if (*arg3 s>= 0)
        result = (***(*(arg1 + 4) + 8))()
        int32_t edx_4 = *arg3
        
        if (edx_4 s< result)
            switch ((*(**(*(arg1 + 4) + 8) + 0x10))(edx_4))
                case nullptr
                    result = sub_41de80(arg1, arg2, *arg3)
                label_41de00:
                    
                    if (result.b != 0)
                        result.b = 1
                        return result
                case 1
                    result = sub_41e120(arg1, arg2, *arg3)
                    goto label_41de00
                case 2
                    result = sub_41e440(arg1, arg2, *arg3)
                    goto label_41de00
                case 3
                    result = sub_41e500(arg1, arg2, *arg3)
                    goto label_41de00
                case 4
                    result = sub_41e740(arg1, arg2, *arg3)
                    goto label_41de00
                case 5
                    if (sub_41ea40(arg1, arg2, *arg3).b != 0)
                        result.b = 1
                        return result

result.b = 0
return result
