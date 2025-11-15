// 函数: sub_57ca80
// 地址: 0x57ca80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg1
void* var_c = ebx
int32_t edi = arg2[1]
int32_t* esi_1 = *arg2

if (esi_1 == edi)
    return 

int32_t* ebp_1 = ebx + 0xc

do
    void** eax = *ebp_1
    void** edx_1 = eax
    void** ecx = eax[1]
    
    if (*(ecx + 0xd) == 0)
        do
            if (ecx[4] s>= *esi_1)
                edx_1 = ecx
                ecx = *ecx
            else
                ecx = ecx[2]
        while (*(ecx + 0xd) == 0)
        
        ebx = var_c
    
    if (edx_1 == eax || *esi_1 s< edx_1[4])
        edx_1 = eax
    
    if (edx_1 == eax)
        int32_t ebx_2 = *(ebx + 0x10)
        void** var_8
        sub_42ebc0(ebp_1, &var_8, esi_1)
        var_8[5] = ebx_2
    
    ebx = var_c
    esi_1 = &esi_1[1]
while (esi_1 != edi)
