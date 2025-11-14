// 函数: sub_4902e0
// 地址: 0x4902e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_c = arg1

for (int32_t* i = *(arg1 + 0x1c); i != *(arg1 + 0x20); i = &i[1])
    void* edi_1 = *i
    int32_t ecx = *(edi_1 + 0x1c)
    char eax_1
    
    if (ecx != 0)
        int32_t var_1c_1 = *(ecx + 0x30)
        void* eax = sub_48f300(ecx)
        
        if (eax != 0 && *(eax + 4) != 0)
            eax_1, edi_1 = sub_508720(eax, arg2, arg3, 0)
            
            if (eax_1 != 0)
                return 1
    
    if (*(edi_1 + 0x20) != 0)
        eax_1 = sub_4902e0(arg2, arg3)
    
    if (*(edi_1 + 0x20) != 0 && eax_1 != 0)
        return 1
    
    void* ecx_3 = *(edi_1 + 0x24)
    
    if (ecx_3 != 0)
        eax_1 = sub_489420(ecx_3, arg2, arg3)
        
        if (eax_1 != 0)
            return 1

void* result
result.b = 0
return result
