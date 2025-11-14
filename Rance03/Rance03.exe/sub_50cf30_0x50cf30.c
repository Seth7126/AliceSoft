// 函数: sub_50cf30
// 地址: 0x50cf30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg1
(*(*edi + 0x18))(arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12)
int32_t esi = 0
int32_t edx_2 = (edi[0xb3] - edi[0xb2]) s>> 2
arg12 = edx_2
void* result

if (edx_2 s> 0)
    do
        if (esi s>= 0 && esi s< (edi[0xb3] - edi[0xb2]) s>> 2)
            void* ecx = *(edi[0xb2] + (esi << 2))
            char var_14_1
            
            if (arg13 != 0)
                if (*(ecx + 4) != 0)
                    var_14_1 = 1
                    goto label_50d003
                
                result.b = 0
            else if (*(ecx + 4) != 0)
                var_14_1 = 0
            label_50d003:
                result, edi = sub_508720(ecx, arg2, arg3, var_14_1)
                edx_2 = arg12
                result.b = result.b != 0
            else
                result.b = 0
            
            if (result.b != 0)
                result.b = 1
                return result
        
        esi += 1
    while (esi s< edx_2)

result.b = 0
return result
