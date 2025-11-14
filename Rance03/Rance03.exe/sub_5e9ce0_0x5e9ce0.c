// 函数: sub_5e9ce0
// 地址: 0x5e9ce0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx = *(arg1 + 8)

if (ecx != 0 && *(arg1 + 4) == 0 && *(arg1 + 0xc) != 0 && *(arg1 + 0x10) != 0
        && (*(*ecx + 0x68))() != 0)
    (*(**(arg1 + 8) + 0xb0))()
    
    if ((*(**(arg1 + 8) + 0x60))(0) != 0 && (*(**(arg1 + 8) + 0x6c))() != 0
            && (*(**(arg1 + 0xc) + 0x34))() != 0 && (*(**(arg1 + 0x10) + 8))() != 0)
        if ((*(**(arg1 + 8) + 0x70))() != 0)
            if ((*(**(arg1 + 0x10) + 0xc))() != 0 && (*(**(arg1 + 0xc) + 0x38))() != 0)
                int32_t ebx = *(arg1 + 0x3c)
                
                if (ebx != 1)
                    goto label_5e9dcd
                
                if ((*(**(arg1 + 8) + 0x90))() != 0)
                    int32_t eax_37 = (*(**(arg1 + 0xc) + 0x20))()
                    int32_t eax_38 = (*(**(arg1 + 0xc) + 0x1c))()
                    char result =
                        (*(**(arg1 + 8) + 0xe4))(*(arg1 + 0x14), *(arg1 + 0x18), eax_38, eax_37)
                    
                    if (result == 0)
                        return result
                    
                    goto label_5e9dda
                
                ebx = 0
            label_5e9dcd:
                
                if ((*(**(arg1 + 8) + 0xb8))(1, 0, 0, 0, 1, 0xffffffff) != 0)
                label_5e9dda:
                    (*(**(arg1 + 8) + 0xc4))(0)
                    (*(**(arg1 + 8) + 0xc8))(0)
                    (*(**(arg1 + 8) + 0xbc))(0)
                    
                    if (ebx == 0)
                        if ((*(**(arg1 + 0xc) + 0x2c))(0, 1, 0, 1) != 0)
                        label_5e9e6d:
                            
                            if ((*(**(arg1 + 0x34) + 0x24))() != 0)
                                char eax_27 = (*(**(arg1 + 0x34) + 0x30))()
                                
                                if (eax_27 != 0)
                                    if (ebx == 1)
                                        eax_27 = (*(**(arg1 + 8) + 0xe8))()
                                    
                                    if ((ebx != 1 || eax_27 != 0)
                                            && (*(**(arg1 + 8) + 0x74))() != 0)
                                        return (*(**(arg1 + 8) + 0x78))() != 0
                    else
                        if (ebx != 1)
                            goto label_5e9e6d
                        
                        if ((*(**(arg1 + 0xc) + 0x2c))(0, 0, 0, 1) != 0)
                            goto label_5e9e6d
        else
            (*(**(arg1 + 0xc) + 0x38))()
            (*(**(arg1 + 8) + 0x74))()
            (*(**(arg1 + 8) + 0x78))()

return 0
