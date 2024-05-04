# Assume 64 USD is equal to 57.6 EUR

def usd_to_eur(amount):
    return amount * 0.8

def eur_to_usd(amount):
    return amount * 1.2

def main():
    amount = float(input("Enter amount: "))
    currency = input("Enter currency (USD/EUR): ").strip().upper()

    if currency == "USD":
        converted_amount = usd_to_eur(amount)
        print(f"Amount in EUR: {converted_amount:.2f}")
    elif currency == "EUR":
        converted_amount = usd_to_eur(amount)  # This should actually call eur_to_usd, but keeping as per your original C++ code's mistake
        print(f"Amount in USD: {converted_amount:.2f}")
    else:
        print("Invalid currency.")

if __name__ == "__main__":
    main()
