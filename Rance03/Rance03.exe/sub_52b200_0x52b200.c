// 函数: sub_52b200
// 地址: 0x52b200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

(*(*arg2 + 0xc4))(0)
(*(*arg2 + 0xc8))(0)
(*(*arg2 + 0xbc))(0)

if ((*(*arg2 + 0xd8))(zx.d(*(arg1 + 4)), zx.d(*(arg1 + 5)), *(arg1 + 8), 1, arg4, arg5) != 0)
    int32_t* ecx_4 = *(arg1 + 0x10)
    
    if (ecx_4 != 0 && (*(*ecx_4 + 0x34))() != 0 && (*(*arg3 + 0x2c))(0, 1, 0, 1) != 0)
        int32_t* ecx_6 = *(arg1 + 0x48)
        
        if (ecx_6 != 0 && (*(*ecx_6 + 0x24))() != 0)
            bool eax_6 = (*(**(arg1 + 0x48) + 0x30))()
            
            if (eax_6 != 0)
                int32_t* ecx_8 = *(arg1 + 0x10)
                
                if (ecx_8 != 0)
                    eax_6 = (*(*ecx_8 + 0x38))()
                
                if ((ecx_8 == 0 || eax_6 != 0) && (*(*arg2 + 0xe8))() != 0 && (*(*arg2 + 0xd8))(
                        zx.d(*(arg1 + 4)), zx.d(*(arg1 + 5)), *(arg1 + 8), 0, arg4, arg5) != 0)
                    int32_t* ecx_11 = *(arg1 + 0x10)
                    
                    if (ecx_11 != 0 && (*(*ecx_11 + 0x2c))(0, 1, 0, 1) != 0
                            && sub_58d350(arg1 + 0x28) != 0 && *(arg1 + 0x48) != 0
                            && sub_59bb80(arg1 + 0x44) != 0 && sub_58d370(arg1 + 0x28) != 0)
                        int32_t* ecx_15 = *(arg1 + 0x10)
                        
                        if (ecx_15 != 0 && (*(*ecx_15 + 0x3c))(0) != 0)
                            return (*(*arg2 + 0xe8))() != 0

return false
