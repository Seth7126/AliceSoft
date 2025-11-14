// 函数: sub_5b5dd0
// 地址: 0x5b5dd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg4
void* esi = (arg2 << 1) + 2
void* var_14 = arg2
void* var_4 = arg2
int32_t ebp = arg3
int32_t var_8 = ebp
bool cond:0 = esi != ebx

while (esi s< ebx)
    void* eax_3 = esi * 0x38 + ebp
    int32_t eax_4
    uint32_t edx
    eax_4, edx = __allmul(*(eax_3 + 0x30), *(eax_3 + 0x34), 0x3e8, 0)
    uint32_t ebx_1 = data_75d564
    int32_t edi_1 = data_75d560
    uint32_t eax_5
    int32_t edx_1
    eax_5, edx_1 = __alldiv(eax_4, edx, edi_1, ebx_1)
    int32_t eax_7
    uint32_t edx_2
    eax_7, edx_2 = __allmul(*(eax_3 - 8), *(eax_3 - 4), 0x3e8, 0)
    uint32_t eax_8
    int32_t edx_3
    eax_8, edx_3 = __alldiv(eax_7, edx_2, edi_1, ebx_1)
    
    if (edx_1 s>= edx_3 && (edx_1 s> edx_3 || eax_5 u> eax_8))
        esi -= 1
    
    ebp = var_8
    void* edi_3 = esi * 0x38 + ebp
    void* ebx_3 = var_14 * 0x38 + ebp
    
    if (ebx_3 + 8 != edi_3 + 8)
        sub_401ff0(ebx_3 + 8, edi_3 + 8, 0, 0xffffffff)
    
    *(ebx_3 + 0x20) = *(edi_3 + 0x20)
    sub_5b5aa0(ebx_3 + 0x24, edi_3 + 0x24)
    arg2 = esi
    *(ebx_3 + 0x30) = *(edi_3 + 0x30)
    esi = (esi << 1) + 2
    arg1 = *(edi_3 + 0x34)
    *(ebx_3 + 0x34) = arg1
    ebx = arg4
    var_14 = arg2
    cond:0 = esi != ebx

if (not(cond:0))
    void* esi_2 = ebx * 0x38 + ebp
    void* edi_5 = arg2 * 0x38 + ebp
    
    if (edi_5 + 8 != esi_2 - 0x30)
        sub_401ff0(edi_5 + 8, esi_2 - 0x30, 0, 0xffffffff)
    
    *(edi_5 + 0x20) = *(esi_2 - 0x18)
    sub_5b5aa0(edi_5 + 0x24, esi_2 - 0x14)
    arg2 = ebx - 1
    *(edi_5 + 0x30) = *(esi_2 - 8)
    arg1 = *(esi_2 - 4)
    *(edi_5 + 0x34) = arg1

int32_t var_28_5 = arg6
return sub_5b5f90(arg1, arg2, ebp, var_4, arg5)
