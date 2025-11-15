// 函数: sub_4a60d0
// 地址: 0x4a60d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4 = arg1
int32_t* ecx = *(arg1 + 4)

if (ecx != 0 && *(arg1 + 8) != 0 && *(arg1 + 0xc) != 0 && (*(*ecx + 0x6c))() != 0)
    (*(**(arg1 + 4) + 0xb4))()
    
    if ((*(**(arg1 + 4) + 0x64))(0) != 0 && (*(**(arg1 + 4) + 0x70))() != 0
            && sub_4a6060(arg1) != 0)
        var_4 = *(arg1 + 0x48)
        
        if (GSI1::OffForSym(arg1, &var_4) != 0)
            (*(**(arg1 + 4) + 0xc8))(0)
            (*(**(arg1 + 4) + 0xcc))(0)
            (*(**(arg1 + 4) + 0xc0))(0)
            int32_t eax_12
            eax_12.b = var_4 == 0
            
            if ((*(**(arg1 + 8) + 0x2c))(0, eax_12, 0, 1) != 0 && (*(**(arg1 + 0x40) + 0x24))() != 0
                    && (*(**(arg1 + 0x40) + 0x30))() != 0)
                if (var_4 != 1)
                label_4a61d3:
                    
                    if ((*(**(arg1 + 4) + 0x78))() != 0)
                        return (*(**(arg1 + 4) + 0x7c))() != 0
                else if ((*(**(arg1 + 4) + 0xec))() != 0)
                    goto label_4a61d3

return false
