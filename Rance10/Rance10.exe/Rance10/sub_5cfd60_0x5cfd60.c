// 函数: sub_5cfd60
// 地址: 0x5cfd60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
int32_t var_4 = ebx
int32_t edi
int32_t var_8 = edi
char eax_2 = (*(*arg1 + 0x24))()

if (eax_2 == 0)
    return eax_2

int32_t esi
int32_t var_c = esi

if ((*(*arg1 + 0x10))() == (*(*arg2 + 0x10))() && (*(*arg1 + 0x14))() == (*(*arg2 + 0x14))())
    bool cond:0 = (*(*arg2 + 0x24))() == 0
    int32_t eax_11 = *arg2
    void var_18
    
    if (cond:0)
        int32_t eax_18
        int32_t* ecx_10
        int32_t edx_3
        eax_18, edx_3, ecx_10 = (*(*arg2 + 0x10))((*(eax_11 + 0x14))())
        int32_t var_10_1 = eax_18
        sub_5d2540(eax_18, edx_3, arg1, ecx_10, arg2, var_18)
        int32_t eax_19
        eax_19.b = 1
        return eax_19
    
    int32_t eax_14
    int32_t* ecx_7
    int32_t edx_2
    eax_14, edx_2, ecx_7 = (*(*arg2 + 0x10))((*(eax_11 + 0x14))())
    int32_t var_10 = eax_14
    sub_5d2490(eax_14, edx_2, arg1, ecx_7, arg2, var_18)
    int32_t eax_15
    eax_15.b = 1
    return eax_15

int32_t eax_5
eax_5.b = 0
return eax_5
