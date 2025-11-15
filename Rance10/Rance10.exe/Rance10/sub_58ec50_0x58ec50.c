// 函数: sub_58ec50
// 地址: 0x58ec50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1
void* ecx = *arg1

if (ecx == 0 || sub_56edb0(ecx).b == 0)
    return 

int32_t* esi_1 = arg1[1]
int32_t ebx_1 = 0
uint32_t ebp_4 = (arg1[2] - esi_1 + 3) u>> 2

if (esi_1 u> arg1[2])
    ebp_4 = 0

if (ebp_4 == 0)
    return 

do
    int32_t* edi_1 = *esi_1
    void* eax_1 = edi_1[2]
    
    if ((*(eax_1 + 0x24) - *(eax_1 + 0x20)) s/ 0x3c s> 0)
        char eax_7 = (*(*edi_1 + 8))()
        
        if (eax_7 != 0 || edi_1[0xa].b != eax_7)
            var_4 = edi_1
            sub_42ca30(arg2, &var_4)
        else
            var_4 = edi_1
            sub_42ca30(&arg2[3], &var_4)
    
    ebx_1 += 1
    esi_1 = &esi_1[1]
while (ebx_1 != ebp_4)
