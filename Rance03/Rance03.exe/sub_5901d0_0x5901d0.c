// 函数: sub_5901d0
// 地址: 0x5901d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* var_4_1 = arg1

if ((*(*arg1 + 0x18))() != 0x20)
    int32_t eax_1
    eax_1.b = 0
    return eax_1

int32_t i_2 = (*(*arg1 + 0x10))()
char* eax_3 = (*(*arg1 + 0x14))()
int32_t esi = 0
char* var_4 = eax_3

if (eax_3 s> 0)
    int32_t ebx
    ebx.b = arg2
    
    do
        eax_3 = (*(*arg1 + 8))(0, esi)
        
        if (i_2 s> 0)
            eax_3 = &eax_3[3]
            int32_t i_1 = i_2
            int32_t i
            
            do
                *eax_3 = ebx.b
                eax_3 = &eax_3[4]
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        esi += 1
    while (esi s< var_4)

eax_3.b = 1
return eax_3
