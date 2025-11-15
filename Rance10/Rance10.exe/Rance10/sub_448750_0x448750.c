// 函数: sub_448750
// 地址: 0x448750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((*(arg1 + 0x48) & 1) != 0)
    return sub_436eb0(arg2, arg3, arg1 + 0x20)

int32_t edx = *(arg1 + 0x48)
int32_t ecx_3
void* ebp

if (((edx u>> 2).b & 1) != 0)
    char* eax_7
    eax_7.b = *arg5
    
    if (((edx u>> 3).b & 1) != 0)
        void* eax_10 = *(arg1 + 0x1c)
        char* eax_11
        eax_11.b = *arg4
        arg5.b = eax_11.b
        char* eax_12 = *(arg1 + 0x18)
        
        if (sub_436eb0(arg2, arg3, arg1 + 0x20) != 0)
            int32_t ebx_2
            ebx_2.b = arg5.b != 0
            int32_t edx_4
            edx_4.b = eax_7.b != 0
            void* result = sub_437380(arg2, arg3, eax_12, *(arg1 + 0x38) * (ebx_2 + 1), 
                *(arg1 + 0x3c) * (ebx_2 + 1), eax_10, *(arg1 + 0x40) * (edx_4 + 1), 
                *(arg1 + 0x44) * (edx_4 + 1))
            return result
    else
        ebp = *(arg1 + 0x1c)
        arg5.b = eax_7.b
        
        if (sub_436eb0(arg2, arg3, arg1 + 0x20) != 0)
            ecx_3.b = arg5.b != 0
            return sub_437240(arg2, arg3, ebp, *(arg1 + 0x40) * (ecx_3 + 1), 
                *(arg1 + 0x44) * (ecx_3 + 1))
else
    ebp = *(arg1 + 0x18)
    char* eax_4
    eax_4.b = *arg4
    arg5.b = eax_4.b
    
    if (sub_436eb0(arg2, arg3, arg1 + 0x20) != 0)
        ecx_3.b = arg5.b != 0
        return sub_437240(arg2, arg3, ebp, *(arg1 + 0x38) * (ecx_3 + 1), 
            *(arg1 + 0x3c) * (ecx_3 + 1))
return 0
