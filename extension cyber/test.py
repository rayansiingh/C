from flask import Flask, request, jsonify

app = Flask(__name__)

@app.route('/check')
def check_url():
    url = request.args.get('url')
    # Use machine learning model to evaluate the URL
    # Return result as JSON
    return jsonify({'status': 'safe'})

if __name__ == '__main__':
    app.run(debug=True)
