// 函数: sub_437740
// 地址: 0x437740
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(arg1 + 0x70) - *(arg1 + 0x6c)) s>> 2 s<= arg2)
    int32_t eax_1
    eax_1.b = 0
    return eax_1

int32_t esi = *(arg1 + 0x6c)

if ((*(arg1 + 0x70) - esi) s>> 2 u<= arg2)
    sub_69a57f("invalid vector<T> subscript")
    noreturn

void* ecx = (*(esi + (arg2 << 2)))[1]
int32_t* eax_5

if (ecx != 0 && arg3 != 0)
    void** ecx_1 = ecx + 0xc
    
    if (ecx_1[5] u>= 0x10)
        ecx_1 = *ecx_1
    
    eax_5 = (*(*arg3 + 0x18))(ecx_1)
    
    if (eax_5 != 0)
        int32_t eax_8
        eax_8.b = (*(*eax_5 + 8))() == 0
        return eax_8

eax_5.b = 0
return eax_5
