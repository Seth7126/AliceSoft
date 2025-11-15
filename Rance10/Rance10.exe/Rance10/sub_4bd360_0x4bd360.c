// 函数: sub_4bd360
// 地址: 0x4bd360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg4
int32_t esi = arg2
int32_t var_10 = arg3
int32_t ebp = ebx - 1
int32_t var_4 = esi
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ebp)
int32_t eax_3 = (eax_1 - edx) s>> 1
int32_t var_c = eax_3
void* edi = esi

if (esi s< eax_3)
    do
        int32_t* ebx_1 = *(arg3 + (edi << 3) + 4)
        void* eax_4 = (edi << 1) + 2
        int32_t* edi_1 = *(arg3 + (eax_4 << 2))
        int32_t eax_6 = (*(*edi_1 + 0x14))()
        int32_t ebp_1 = (*(*edi_1 + 0x10))()
        int32_t eax_8 = (*(*ebx_1 + 0x14))()
        int32_t eax_9 = (*(*ebx_1 + 0x10))()
        
        if (eax_9 s< eax_8)
            eax_9 = eax_8
        
        if (ebp_1 s< eax_6)
            ebp_1 = eax_6
        
        edi = eax_4 - 1
        
        if (ebp_1 s<= eax_9)
            edi = eax_4
        
        arg3 = var_10
        *(arg3 + (esi << 2)) = *(arg3 + (edi << 2))
        esi = edi
        eax_3 = var_c
    while (edi s< eax_3)
    
    ebx = arg4

if (edi == eax_3 && (ebx.b & 1) == 0)
    eax_3 = *(arg3 + (ebx << 2) - 4)
    *(arg3 + (esi << 2)) = eax_3
    esi = ebp

int32_t var_2c = arg3
return sub_4bd550(eax_3, esi, arg3, var_4, arg5)
