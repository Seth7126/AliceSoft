// 函数: sub_451e30
// 地址: 0x451e30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x10)

if (ecx != 0 && (*(*ecx + 0x3c))() != 0)
    char eax_5 = (*(**(arg1 + 0x10) + 0x24))()
    
    if (eax_5 == 0)
        return eax_5
    
    void* eax_6 = arg1
    int32_t edx = 0
    int32_t* esi = *(eax_6 + 0x30)
    void* const ebx_1 = nullptr
    int32_t edi = *(eax_6 + 0x34)
    int32_t ebp = 0
    int32_t var_4 = 0
    
    if (esi != edi)
        while (true)
            void* ecx_2 = *esi
            
            if (*(ecx_2 + 0x11c) == 0)
                if (ebx_1 == 0)
                    goto label_451f06
                
                if (sub_450ef0(ecx_2, ebx_1) == 0)
                    sub_451f90(arg1, arg2, ebx_1, var_4, ebp)
                label_451f06:
                    ebx_1 = *esi
                    ebp = 1
                    edx = *(ebx_1 + 0x128)
                    var_4 = edx
                else
                    edx = var_4
                    ebp += 1
            else
                if (ebx_1 != 0)
                    sub_451f90(eax_6, arg2, ebx_1, edx, ebp)
                    ebx_1 = nullptr
                
                int32_t* ecx_4 = *(*esi + 0x11c)
                char eax_10
                
                if (ecx_4 != 0)
                    eax_10 = (*(*ecx_4 + 0xc))()
                
                if (ecx_4 != 0 && eax_10 == 0)
                    return 0
                
                eax_10 = (*(**(arg1 + 0x10) + 0x24))()
                
                if (eax_10 == 0)
                    return 0
                
                edx = var_4
            
            esi = &esi[1]
            
            if (esi == edi)
                break
            
            eax_6 = arg1
        
        if (ebx_1 != 0 && sub_4511f0(ebx_1, arg2, arg1 + 0x14) != 0)
            (*(**(arg1 + 0x10) + 0x28))(var_4, ebp << 1)
    
    (*(*arg2 + 0xb4))()
    int32_t eax_18
    eax_18.b = 1
    return eax_18

return 1
