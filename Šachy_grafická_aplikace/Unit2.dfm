object Vyber: TVyber
  Left = 720
  Top = 459
  BorderIcons = []
  Caption = 'v'#253'b'#283'r'
  ClientHeight = 126
  ClientWidth = 420
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 105
    Top = 32
    Width = 195
    Height = 13
    Caption = 'Vyber si figurku na kterou ji chce'#353' zm'#283'nit'
  end
  object kun: TButton
    Left = 48
    Top = 64
    Width = 75
    Height = 25
    Caption = 'k'#367#328
    TabOrder = 0
    OnClick = kunClick
  end
  object strelec: TButton
    Left = 129
    Top = 64
    Width = 75
    Height = 25
    Caption = 'st'#345'elec'
    TabOrder = 1
    OnClick = strelecClick
  end
  object vez: TButton
    Left = 210
    Top = 64
    Width = 75
    Height = 25
    Caption = 'v'#283#382
    TabOrder = 2
    OnClick = vezClick
  end
  object dama: TButton
    Left = 291
    Top = 64
    Width = 75
    Height = 25
    Caption = 'd'#225'ma'
    TabOrder = 3
    OnClick = damaClick
  end
end
