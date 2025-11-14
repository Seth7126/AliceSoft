// 函数: sub_60c480
// 地址: 0x60c480
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx
int32_t var_4 = ebx
char eax_2 = (*(*arg3 + 0x68))()

if (eax_2 == 0)
    return eax_2

int32_t edi
int32_t var_8 = edi
int32_t* eax_4 = (*(*arg3 + 0x4c))()

if (eax_4 == 0)
    eax_4.b = 0
    return eax_4

int32_t ebp
int32_t var_8_1 = ebp
int32_t esi
int32_t var_c = esi

if ((*(*eax_4 + 0x30))((*(*arg6 + 0x10))((*(*arg6 + 0x14))(1, 1, (*(*arg3 + 0x84))(1)))) == 0)
    sub_64b530(0x6ebc58)
    (*(*eax_4 + 4))()
    int32_t eax_14
    eax_14.b = 0
    return eax_14

bool cond:0 = (*(*arg3 + 0x6c))() == 0
void* eax_18 = *eax_4

if (cond:0)
label_60c556:
    (*(eax_18 + 0x38))()
    (*(*eax_4 + 4))()
else
    char eax_20
    int32_t ecx_8
    eax_20, ecx_8 = (*(eax_18 + 0x34))()
    
    if (eax_20 == 0)
        (*(*eax_4 + 4))()
    else
        int32_t var_8_5 = ecx_8
        
        if ((*(*arg3 + 0x64))(0, 0x3f800000) != 0)
            bool cond:1_1 = (*(*arg3 + 0x70))() == 0
            eax_18 = *eax_4
            
            if (cond:1_1)
                goto label_60c556
            
            if ((*(eax_18 + 0x38))() == 0)
                (*(*eax_4 + 4))()
            else
                bool cond:2_1 = (*(*arg3 + 0x74))() != 0
                eax_18 = *eax_4
                
                if (not(cond:2_1))
                    goto label_60c556
                
                bool cond:3_1 = (*(eax_18 + 0x40))(arg6) == 0
                int32_t eax_34 = *eax_4
                
                if (not(cond:3_1))
                    (*(eax_34 + 4))()
                    int32_t eax_35
                    eax_35.b = 1
                    return eax_35
                
                (*(eax_34 + 4))()

return 0
