object Form2: TForm2
  Left = 880
  Top = 489
  Width = 380
  Height = 297
  Caption = 'Opcje'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object BitBtn1: TBitBtn
    Left = 192
    Top = 192
    Width = 105
    Height = 33
    TabOrder = 0
    Kind = bkCancel
  end
  object BitBtn2: TBitBtn
    Left = 40
    Top = 192
    Width = 105
    Height = 33
    TabOrder = 1
    OnClick = BitBtn2Click
    Kind = bkOK
  end
  object CheckBox1: TCheckBox
    Left = 88
    Top = 56
    Width = 145
    Height = 25
    Caption = 'Licznik czasu'
    Checked = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    State = cbChecked
    TabOrder = 2
  end
  object CheckBox2: TCheckBox
    Left = 88
    Top = 104
    Width = 145
    Height = 25
    Caption = 'Tryb Nocny'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
end
