// 函数: sub_522f90
// 地址: 0x522f90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
char* ebx = arg1 + 4
int32_t i_1 = 0x50
void** edi = arg1 + 0x54
int32_t i_2 = 0x50
int32_t i

do
    if (*ebx != 0)
        void* eax = arg2[1]
        int32_t ecx
        
        if (edi u< eax)
            ecx = *arg2
        
        void** ecx_3
        
        if (edi u>= eax || ecx u> edi)
            if (eax == arg2[2])
                sub_404610(arg2, 1)
                i_1 = i_2
            
            ecx_3 = arg2[1]
            
            if (ecx_3 != 0)
                *ecx_3 = *edi
        else
            if (eax == arg2[2])
                sub_404610(arg2, 1)
                i_1 = i_2
            
            ecx_3 = arg2[1]
            
            if (ecx_3 != 0)
                *ecx_3 = *(*arg2 + ((edi - ecx) s>> 2 << 2))
        arg2[1] += 4
    
    *ebx = 0
    edi = &edi[1]
    ebx = &ebx[1]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
