// 函数: sub_599570
// 地址: 0x599570
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg6
void* ebx = arg2
void* edi = arg5

if (arg3 != ebx && arg4 != edi)
    bool cond:0_1
    
    do
        int32_t* var_1c_1 = *(ebx - 4)
        void* ecx = *(edi - 4)
        arg5 = ebx
        ebx -= 4
        arg6 = edi
        edi -= 4
        esi -= 4
        int32_t eax_2
        
        if (sub_597ff0(ecx, var_1c_1) == 0)
            eax_2 = *edi
            cond:0_1 = arg4 != edi
            ebx = arg5
        else
            eax_2 = *ebx
            edi = arg6
            cond:0_1 = arg3 != ebx
        
        *esi = eax_2
    while (cond:0_1)

void* edi_1 = edi - arg4
return sub_6feca0(esi - edi_1, arg4, edi_1)
