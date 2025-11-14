// 函数: sub_4a5760
// 地址: 0x4a5760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebp = *(arg1 + 0x1c)
int32_t edi
int32_t var_10 = edi
int32_t* i = *ebp

while (i != ebp)
    void* ebx_1 = i[5]
    int32_t edx_1 = 0
    int32_t edi_2 = *(ebx_1 + 4)
    
    if (edi_2 s> 0)
        do
            void* esi_1 = *(*(ebx_1 + 0xc) + (edx_1 << 2))
            
            if (esi_1 != 0 && *(esi_1 + 0x10c) s< *(esi_1 + 0x110))
                i.b = 1
                return i
            
            edx_1 += 1
        while (edx_1 s< edi_2)
    
    if (*(i + 0xd) == 0)
        int32_t* i_1 = i[2]
        
        if (*(i_1 + 0xd) != 0)
            int32_t* i_3 = i[1]
            
            if (*(i_3 + 0xd) == 0)
                while (i == i_3[2])
                    i = i_3
                    i_3 = i_3[1]
                    
                    if (*(i_3 + 0xd) != 0)
                        break
            
            i = i_3
        else
            i = i_1
            int32_t* i_2 = *i
            
            while (*(i_2 + 0xd) == 0)
                i = i_2
                i_2 = *i

i.b = 0
return i
