// 函数: sub_58ba80
// 地址: 0x58ba80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 2
void* eax = *(arg1 + 4)
int32_t ecx = *(eax + 0x164)
int32_t ebp = *(eax + 0x160)
int32_t* var_4
sub_42f3d0(eax + 0x16c, &var_4, &var_8)
int32_t* eax_1 = var_4
int32_t eax_2

if (eax_1 != *(eax + 0x16c))
    eax_2 = eax_1[5]
else
    eax_2 = 0

int32_t edi = *(arg1 + 0x300)
int32_t esi_1 = (*(**(arg1 + 8) + 0x84))()
char result = (*(**(arg1 + 8) + 0x88))(esi_1)

if (result == 0)
    esi_1 = 0

char var_e_1

if (edi == esi_1 && *(arg1 + 0x2f4) == ebp)
    var_e_1 = 0

if (edi != esi_1 || *(arg1 + 0x2f4) != ebp || *(arg1 + 0x2f8) != ecx)
    var_e_1 = 1

if (*(arg1 + 0x124) s>= 2)
    result = (*(**(arg1 + 8) + 0xa8))()

if (*(arg1 + 0x124) s< 2 || result == 0)
    result = 0
else
    result = 1

if (eax_2 s<= 0 || result == 0)
    int32_t* ecx_8 = *(arg1 + 0x2f0)
    
    if (ecx_8 != 0)
        (*(*ecx_8 + 4))()
        *(arg1 + 0x2f0) = 0
    
    *(arg1 + 0x2f4) = 0
    *(arg1 + 0x2f8) = 0
    *(arg1 + 0x2fc) = 0
    *(arg1 + 0x300) = 0
    *(arg1 + 0x304) = 0
else if (*(arg1 + 0x304) == 0 || var_e_1 != 0)
    int32_t esi_2 = (*(**(arg1 + 8) + 0x84))()
    
    if ((*(**(arg1 + 8) + 0x88))(esi_2) == 0)
        esi_2 = 0
    
    result = sub_58d270(arg1 + 0x2ec, ecx, ebp, ecx, 1, esi_2, 1, *(arg1 + 8))
    
    if (result == 0)
        return result

return 1
