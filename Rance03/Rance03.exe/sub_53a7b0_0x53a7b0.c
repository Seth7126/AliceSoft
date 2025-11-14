// 函数: sub_53a7b0
// 地址: 0x53a7b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 0x14)

if (ecx != 0)
    (*(*ecx + 4))()
    *(arg1 + 0x14) = 0

int32_t edi = *(arg1 + 0x38)
int32_t edi_1 = edi + *(arg1 + 0x34)

if (edi + *(arg1 + 0x34) s< 0 || edi_1 s<= 0)
    int32_t eax
    eax.b = 1
    return eax

int32_t eax_3 = (*(*arg2 + 0x10))()
int32_t eax_4 = (*(*arg2 + 0x14))()
char ecx_3 = edi_1.b
int32_t* edi_2 = arg2
int32_t ebx_2 = eax_3 s>> ecx_3

if (ebx_2 s< 1)
    ebx_2 = 1

int32_t ebp_2 = eax_4 s>> ecx_3

if (ebp_2 s< 1)
    ebp_2 = 1

arg2.b = (*(*edi_2 + 0x24))()
char edx_3 = arg2.b
int32_t eax_10

if (edx_3 == 0 || (*(*edi_2 + 0x28))() == 0)
    int32_t* ecx_7 = *(*(arg1 + 0x3c) + 0x20)
    
    if (ecx_7 != 0)
        eax_10 = (*(*ecx_7 + 0xc))(ebx_2, ebp_2, 0x20)
        edx_3 = arg2.b
    else
        eax_10 = 0
    
    *(arg1 + 0x14) = eax_10
    
    if (eax_10 != 0)
    label_53a88b:
        
        if (edx_3 == 0)
            eax_10.b = 1
            return eax_10
        
        int32_t* esi_1 = *(arg1 + 0x14)
        
        if ((*(*esi_1 + 0x18))() == 0x20
                && sub_53a8d0(esi_1, ebx_2, ebp_2, edi_2, eax_3, eax_4).b != 0)
            eax_10.b = 1
            return eax_10
else
    int32_t* ecx_6 = *(*(arg1 + 0x3c) + 0x20)
    
    if (ecx_6 != 0)
        eax_10 = (*(*ecx_6 + 8))(ebx_2, ebp_2, 0x20)
        edx_3 = arg2.b
    else
        eax_10 = 0
    
    *(arg1 + 0x14) = eax_10
    
    if (eax_10 != 0)
        goto label_53a88b

eax_10.b = 0
return eax_10
