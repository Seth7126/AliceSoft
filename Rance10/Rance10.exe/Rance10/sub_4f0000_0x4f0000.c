// 函数: sub_4f0000
// 地址: 0x4f0000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0)
    return 

void** ebx = *(arg1 + 0x78)
int32_t var_10 = arg2
void* eax = sub_4f15e0(ebx)

if (eax == 0)
    return 

int32_t edi_1 = *(eax + 8)

if (arg2 s< edi_1 || *(eax + 4) + edi_1 s<= arg2)
    return 

eax.b = *(*(eax + 0xc) + ((arg2 - edi_1) << 2)) != 0

if (eax.b == 0)
    return 

int32_t var_10_1 = arg2
void* ecx_4 = sub_4f15e0(ebx)
int32_t edx_3

if (ecx_4 != 0)
    edx_3 = *(ecx_4 + 8)

void* const esi_2

if (ecx_4 == 0 || arg2 s< edx_3 || *(ecx_4 + 4) + edx_3 s<= arg2)
    esi_2 = nullptr
else
    esi_2 = *(*(ecx_4 + 0xc) + ((arg2 - edx_3) << 2))

int32_t* ecx_5 = *(esi_2 + 0x74)

if (ecx_5 != 0)
    eax = (*(*ecx_5 + 8))(1)

bool cond:0_1

if (ecx_5 != 0 && eax == 2)
    int32_t* ecx_6 = *(esi_2 + 0x74)
    
    if (ecx_6 == 0)
        return 
    
    cond:0_1 = (*(*ecx_6 + 8))(1) != 2
label_4f00a6:
    
    if (cond:0_1)
        return 
    
    *(*(esi_2 + 0x74) + 0x11c)
    return 

int32_t* ecx_7 = *(esi_2 + 0x74)

if (ecx_7 == 0 || (*(*ecx_7 + 8))(1) != 3)
    return 

int32_t* ecx_8 = *(esi_2 + 0x74)

if (ecx_8 == 0)
    return 

cond:0_1 = (*(*ecx_8 + 8))(1) != 3
goto label_4f00a6
