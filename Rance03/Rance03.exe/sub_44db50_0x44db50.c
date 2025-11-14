// 函数: sub_44db50
// 地址: 0x44db50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4 = arg1
int32_t* arg_4
int32_t* eax = arg_4
void* edi = data_75d4cc

if (eax s>= 1)
    arg_4 = eax
    sub_42f3d0(edi + 0x2a0, &var_4, &arg_4)
    eax = var_4
    void* ecx_1
    
    if (eax != *(edi + 0x2a0))
        ecx_1 = eax[5]
    
    int32_t ecx_2
    
    if (eax == *(edi + 0x2a0) || ecx_1 == 0)
        ecx_2 = 0
    else
        ecx_2 = *(ecx_1 + 0xd8)
    
    int32_t* edx_1 = *(edi + 0x18)
    
    if (edx_1 != 0 && ecx_2 != 0)
        eax = (*(*edx_1 + 8))(ecx_2, 0)
        
        if (eax != 0)
            int32_t* var_10_2 = eax
            bool cond:0_1 = sub_44da70(arg2) != 0
            int32_t eax_3 = *eax
            
            if (cond:0_1)
                (*(eax_3 + 4))()
                int32_t eax_4
                eax_4.b = 1
                return eax_4
            
            (*(eax_3 + 4))()

eax.b = 0
return eax
