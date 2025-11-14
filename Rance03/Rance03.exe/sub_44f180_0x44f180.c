// 函数: sub_44f180
// 地址: 0x44f180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4_1 = arg1
sub_44eea0(arg1)
int32_t* i_1 = *(arg2 + 4)
int32_t* i = *i_1

if (i != i_1)
    do
        void* ebx_1 = i[5]
        
        if (ebx_1 != 0)
            struct chipmunk::CSprite::VTable** eax_1 = sub_69adc6(0xe0)
            
            if (eax_1 == 0)
                eax_1.b = 0
                return eax_1
            
            struct chipmunk::CSprite::VTable** edi_1 = sub_44e7c0(eax_1, *(ebx_1 + 8))
            
            if (edi_1 == 0)
                eax_1.b = 0
                return eax_1
            
            if (sub_44eb60(edi_1, ebx_1).b == 0)
                edi_1[1] -= 1
                
                if (edi_1[1] s<= 0)
                    (*edi_1)->vFunc_0(1)
                
                eax_1.b = 0
                return eax_1
            
            int32_t ecx
            i_1, ecx = sub_42f350(arg1 + 4, &i[4])
            *i_1 = edi_1
        
        if (*(i + 0xd) == 0)
            int32_t* i_2 = i[2]
            
            if (*(i_2 + 0xd) != 0)
                i_1 = i[1]
                
                if (*(i_1 + 0xd) == 0)
                    while (i == i_1[2])
                        i = i_1
                        i_1 = i_1[1]
                        
                        if (*(i_1 + 0xd) != 0)
                            break
                
                i = i_1
            else
                i = i_2
                i_1 = *i
                
                while (*(i_1 + 0xd) == 0)
                    i = i_1
                    i_1 = *i
    while (i != *(arg2 + 4))

i_1.b = 1
return i_1
